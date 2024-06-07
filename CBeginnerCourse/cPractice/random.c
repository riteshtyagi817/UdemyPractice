#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(0));
	for(int i = 0; i < 5;i++)
	{
		printf("value is %d\n", rand()%20);
	}
	
	for(int i = 0; i < 5;i++)
	{
		printf("value is %d\n", rand()%20);
	}
	return 0;

	
	return 0;

}
