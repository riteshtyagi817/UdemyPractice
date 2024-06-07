#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <string.h>
#include <errno.h>
#include <signal.h>

int score = 0;

void end_game() {

   printf("\nFinal score: %d\n", score);
   exit(0); 
}

void error(char *msg)
{
   fprintf(stderr, "%s: %s\n", msg, strerror(errno));
   exit(1);
}

void sig_handler(int signum)
{
	printf("Your final score is %d\n", score);
	printf("Bye-Bye\n");
	exit(0);

}
void alarm_handler(int signum)
{
	printf("Sorry Time's Up\n");
	raise(SIGINT);
	printf("This line will never execute\n");
	return;
}
int main() {

   srand (time(0));
   if(signal(SIGINT, sig_handler) == SIG_ERR)
   {
	perror("Could not register the signal SIGINT\n");
	exit(1);

   }  
 
   if(signal(SIGALRM, alarm_handler) == SIG_ERR)
   {
	perror("Could not register the signal SIGALARM\n");
	exit(1);
   }
   while(1) {
      int a = rand() % 11;
      int b = rand() % 11;
      char txt[4];
      alarm(5); 
      printf("\nWhat is %d times %d: ", a, b);
      fgets(txt, 4, stdin);
      int answer = atoi(txt);

      if(answer == a * b)
         score++;
      else
         printf("\nWrong! Score: %d\n", score);
    }

    return 0;
} 
