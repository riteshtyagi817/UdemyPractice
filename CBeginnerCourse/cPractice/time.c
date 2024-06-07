#include<stdio.h>
#include<time.h>
int main()
{
	time_t cal_start;
	time_t cal_end;
	clock_t start_time, end_time;
	start_time = clock();
	cal_start = time(NULL);
	long long range = 1233434134L;
	char choice ;
	do{
	printf("Enter the choice\n");
	scanf("%c",&choice);
	for(long long i = 0; i < range;i++)
	{
		;	


	}

	}while(choice != 'y');
	end_time = clock();
	cal_end = time(NULL);
	printf("The total time processor took is %lf sec\n", (double)((long long)end_time - (long long)start_time)/CLOCKS_PER_SEC);	
	
	printf("The total calendar time is %lld sec\n", ((long long)cal_end - (long long)cal_start));
	printf("The total time calendar  is %lf sec\n", difftime(cal_end,cal_start));
	return 0;

}

