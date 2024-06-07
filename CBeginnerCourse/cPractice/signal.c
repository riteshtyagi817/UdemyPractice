#include<stdio.h>
#include<signal.h>
#include<unistd.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
void hdl(int signum, siginfo_t *siginfo, void *context)
{
	printf("printing pid = %ld and printing uid = %ld\n", (long)siginfo->si_pid, (long)siginfo->si_uid);
	printf("inside another handler version\n");
	return;
}
int main()
{
	struct sigaction act;
	memset(&act,0, sizeof(act));
	act.sa_sigaction = &hdl;
	
	act.sa_flags = SA_SIGINFO;
	

	if(sigaction(SIGINT, &act, NULL) < 0)
	{
		perror("could not register\n");
		return 1;



	}
	while(1)
		sleep(3);


	return 0;


}
