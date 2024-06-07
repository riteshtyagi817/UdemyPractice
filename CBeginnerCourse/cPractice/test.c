#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
	time_t now = 0;
	time(&now);
	struct tm beg_month;
	beg_month = *localtime(&now);
	beg_month.tm_hour = 0;
	beg_month.tm_min = 0;
	beg_month.tm_sec = 0;
	beg_month.tm_mday = 1;
	double seconds = difftime(now, mktime(&beg_month));
	printf("The seconds elapsed is %lf\n", seconds/(3600*24));
	



	return 0;
}
