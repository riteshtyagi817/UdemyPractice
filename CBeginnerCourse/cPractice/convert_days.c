/*
 Author: Ritesh Tyagi
 Purpose: this will calculate the days and years from the given minutes

*/

#include<stdio.h>
int main()
{
	int minutes = 0;
	double minutes_in_years = 0.0;
	double days = 0.0;
	double years = 0.0;
	printf(" Enter the number of minutes :");
	scanf("%d", &minutes);
	
	minutes_in_years = 60*24*365;
	
	double minutes_in_days = 24*60;
	days = minutes/minutes_in_days;
	printf(" Number of days in the given minutes are : %f\n", days);
	
	years = minutes/minutes_in_years;
	 
	printf(" Number of years in the given minutes are : %f\n", years);
	


	return 0;


}
