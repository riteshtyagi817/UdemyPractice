#include<stdio.h>
#include<unistd.h>
int main()
{	
	pid_t pid;
	pid = fork();
	if(pid == 0)
	{
		printf(" I am child and my pid is %d and parent id is %d\n", getpid(),getppid());
		return 0;
	}
	pid = fork();	
	if(pid == 0)
	{
		printf(" I am child and my pid is %d and parent id is %d\n", getpid(), getppid());
		return 0;
	}
	pid = fork();
	if(pid == 0)
	{
		printf(" I am child and my pid is %d and parent id is %d\n", getpid(), getppid());
		return 0;
	}
	else
	{
		printf(" I am parent and my pid is %d and parent id is %d\n", getpid(), getppid());

		

	}
	return 0;




}
