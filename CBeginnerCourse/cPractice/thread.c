#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
pthread_attr_t attr;
void *thread_func(void * tid)
{	
	size_t stacksize = 0;
	pthread_t thread_id = *(pthread_t *)tid;
	printf("The ID I received in the thread is %ld\n",(long)thread_id);
	int ret = pthread_attr_getstacksize(&attr, &stacksize);
	printf("The stack size I am printing in this thread is %zu\n", (long)stacksize);
	pthread_cancel(pthread_self());
	pthread_exit(NULL);
		
}
int main()
{
	pthread_t pthread_id;
	pthread_attr_init(&attr);
	size_t stacksize  = 0;
	int ret = pthread_attr_getstacksize(&attr, &stacksize);
	printf("Currently allocated stack size is %zu bytes\n", (long)stacksize);
	stacksize = 9000;
	ret = pthread_attr_setstacksize(&attr, stacksize);
		
	ret = pthread_attr_getstacksize(&attr, &stacksize);

	//printf("now the stack is set to %zu bytes\n", (long)stacksize);
	
	pthread_create(&pthread_id, &attr, thread_func,(void *)&pthread_id);
	
	pthread_join(pthread_id,NULL);
	printf("main exit\n");
	pthread_exit(NULL);


}
