#include<stdio.h>
#include<pthread.h>
#include<unistd.h>
#define NUM_THREADS 10
int globCount = 0;

pthread_mutex_t mtx = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t cond_var = PTHREAD_COND_INITIALIZER;
pthread_mutex_t cond_mtx = PTHREAD_MUTEX_INITIALIZER;
int number_evens_finished = 0;
void * print_message(void *input)
{
	pthread_mutex_lock(&cond_mtx);
	if(*(int *)input % 2 == 0)
	{
		number_evens_finished++;
		//if(number_evens_finished == (NUM_THREADS/2))
	//		pthread_cond_broadcast(&cond_var);


	}
	else
	{
	
	if(number_evens_finished != NUM_THREADS/2)
			pthread_cond_wait(&cond_var, &cond_mtx);

	}
	pthread_mutex_unlock(&cond_mtx);
	printf("My thread ID is %ld\n", (long)pthread_self());	
	printf("input passed to me is %d\n",*(int *)input);
	pthread_mutex_lock(&mtx);
	printf("global count variable is %d\n", globCount);
	globCount++;
	printf("global count variable is %d\n", globCount);
	pthread_mutex_unlock(&mtx);
	pthread_exit(NULL);


}

int main()
{
	
	printf("I am main thread and my thread id is %ld\n", (long)pthread_self());
	printf("Currently global count variable is %d\n", globCount);
	
	pthread_t thread_array[NUM_THREADS];
	int value[10];
	for(int i = 0; i < NUM_THREADS;i++)
	{
		value[i] = i;
		pthread_create(&thread_array[i],NULL, print_message, &value[i]);
		
	}
	sleep(1);
	if(number_evens_finished == NUM_THREADS/2)
		pthread_cond_broadcast(&cond_var);
	
	/*
	int value1 = 0;
	int value2 = 1;
	int value3 = 2;
	int value4 = 3;
	int value5 = 4;
	int value6 = 5;
	int value7 = 6;
	int value8 = 7;
	int value9 = 8;
	int value10 = 9;	
		
	pthread_create(&thread_array[0], NULL, print_message, &value1);	
	sleep(1);
	pthread_create(&thread_array[1], NULL, print_message, &value2);
	sleep(1);
	pthread_create(&thread_array[2], NULL, print_message, &value3);
	sleep(1);
	pthread_create(&thread_array[3], NULL, print_message, &value4);
	sleep(1);
	pthread_create(&thread_array[4], NULL, print_message, &value5);
	sleep(1);
	pthread_create(&thread_array[5], NULL, print_message, &value6);
	sleep(1);
	pthread_create(&thread_array[6], NULL, print_message, &value7);
	sleep(1);
	pthread_create(&thread_array[7], NULL, print_message, &value8);
	sleep(1);
	pthread_create(&thread_array[8], NULL, print_message, &value9);
	sleep(1);
	pthread_create(&thread_array[9], NULL, print_message, &value10);
	*/
	for(int i = 0; i < NUM_THREADS;i++)
	{
		pthread_join(thread_array[i], NULL);


	}
	


	return 0;
}
