#include<stdio.h>
int main()
{
	float rain_fall[5][12] = {
		{23.4,78.1,11.3,43.6,11.2,9.1, 0.4,8.5, 9.0, 10.2,11.12,32.21},
		{33.4,23.1,17.3,1.6,0.2,0.1, 8.4,7.5, 5.0, 11.2,41.12,22.2},
		{12.4,8.1,1.3,43.6,11.2,91.1, 10.4,81.5, 92.0, 0.2,1.12,2.21},
		{23.4,78.1,1.3,3.6,1.2,92.1, 10.4,0.5, 0.0, 1.2,1.12,3.21},
		{2.4,8.1,111.3,4.6,1.2,91.1, 0.4,0.5, 1.0, 1.2,1.12,3.21},
		};


	printf("YEAR\tRAINFALL\t(inches)\n\n");
	int start = 2010;
	double year_total = 0.0;
	for(int i = 0; i < 5;i++)
	{
		double each_year = 0.0;
		for(int j = 0; j < 12;j++)
		{
			each_year += rain_fall[i][j];

		}
		printf("%d\t%5.1f\n", start, each_year);
		year_total += each_year;
		start++;

	}
	printf("The yearly average is %.2f inches.\n", year_total/5.0);
	printf("MONTHLY AVERAGES:\n\n\n");
	printf("Jan  Feb  Mar  Apr  May  June  July  Aug  Sep  Oct  Nov  Dec\n");
	for(int j = 0; j < 12;j++)
	{
		double monthly_total = 0.0;
		for(int i = 0; i < 5;i++)
		{
			monthly_total += rain_fall[i][j];


		}
		printf("%5.2f ", monthly_total/12);


	}

	return 0;



}
