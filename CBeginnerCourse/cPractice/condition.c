#include<stdio.h>
#include<pthread.h>

pthread_mutex_t mtx = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t cond_mtx = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t cond_count = PTHREAD_COND_INITIALIZER;
#define COUNT_RANGE1  4
#define COUNT_RANGE2  7
#define COUNT_DONE 12
int count = 0;


void * functioncount1()
{
	for(;;)
	{
		pthread_mutex_lock(&cond_mtx);
		if(count < COUNT_RANGE1 || count > COUNT_RANGE2)
			pthread_cond_signal(&cond_count);
		pthread_mutex_unlock(&cond_mtx);
		pthread_mutex_lock(&mtx);
		count++;
		printf("Count value in function1 is %d\n", count);
		pthread_mutex_unlock(&mtx);
		if(count > COUNT_DONE) return NULL;

	}
	pthread_exit(NULL);


}
void *functioncount2()
{
	for(;;)
	{
		pthread_mutex_lock(&cond_mtx);	
		while(count >= COUNT_RANGE1 && count <= COUNT_RANGE2)	
			pthread_cond_wait(&cond_count, &cond_mtx);
		pthread_mutex_unlock(&cond_mtx);

		
		pthread_mutex_lock(&mtx);
		count++;
		printf("Count value in function2 is %d\n", count);
		pthread_mutex_unlock(&mtx);
		
		if(count > COUNT_DONE)return NULL;

	}
	pthread_exit(NULL);
	
}
int main()
{

	pthread_t thread1;
	pthread_t thread2;

	pthread_create(&thread1, NULL, functioncount1, NULL);
	pthread_create(&thread2, NULL, functioncount2, NULL);
	
	pthread_join(thread1, NULL);
	pthread_join(thread2, NULL);
	
	printf("The total count value finally is %d\n", count);
	

	return 0;

}
