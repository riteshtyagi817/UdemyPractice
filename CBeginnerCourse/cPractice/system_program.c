#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
	pid_t childPid, parentPid;
	childPid = getpid();
	parentPid = getppid();
	printf("I am child and my process id is %d\n", childPid);
	printf("I am parent and my process id is %d\n", parentPid);
	printf("now executing ps command\n");
	system("ps -ef");
	



	return 0;
}
