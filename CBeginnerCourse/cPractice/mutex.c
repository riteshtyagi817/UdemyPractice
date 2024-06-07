#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>
#include<unistd.h>
// deadlock example
pthread_mutex_t lock1;
pthread_mutex_t lock2;
void * process_resource1()
{
	pthread_mutex_lock(&lock1);
	printf("resource 1 acquired\n");
	sleep(1);
	printf("trying to acquire resource 2\n");
	while(pthread_mutex_trylock(&lock2))
	{
		pthread_mutex_unlock(&lock1);
		sleep(2);
		pthread_mutex_lock(&lock1);


	}
	
	sleep(1);

	pthread_mutex_unlock(&lock2);
	
	printf("resource 2 done\n");
	
	pthread_mutex_unlock(&lock1);
	printf("resource 1  done\n"); 
	pthread_exit(NULL);

}

void * process_resource2()
{
	pthread_mutex_lock(&lock2);
	printf("resource 2 acquired\n");
	sleep(1);
	printf("trying to acquire resource 1\n");
	pthread_mutex_lock(&lock1);
	
	sleep(1);

	pthread_mutex_unlock(&lock1);
	
	printf("resource 1 done\n");
	
	pthread_mutex_unlock(&lock2);

	printf("resource 2 done\n");
	pthread_exit(NULL);

}
int main()
{
	pthread_mutex_init(&lock1, NULL);
	pthread_mutex_init(&lock2, NULL);
	
	pthread_t thread1;
	pthread_t thread2;
	
	pthread_create(&thread1, NULL,process_resource1,NULL);	
	pthread_create(&thread2, NULL,process_resource2,NULL);


	pthread_join(thread1, NULL);
	pthread_join(thread2, NULL);
	pthread_exit(NULL);
	return 0;
}









