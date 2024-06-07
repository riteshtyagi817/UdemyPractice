#include<stdio.h>
#define PAYRATEWEEKLY 12
#define OVERTIMERATE 18
#define TAXRATE_300 0.15
#define TAXRATE_150 0.20
#define TAXRATE_OTHER 0.25
#define WEEKHOURS 40

int main()
{
	int num_hours_week = 0;
	printf(" Enter the no of total hours worked in the week: ");
	scanf("%d", &num_hours_week);
	
	int gross_pay = 0;
	double total_tax = 0.0;
	double net_pay = 0.0;
	
	if(num_hours_week <= 40)
	{
		gross_pay = (PAYRATEWEEKLY*num_hours_week);

	}
	else
	{
		gross_pay = (PAYRATEWEEKLY*WEEKHOURS) + ((num_hours_week-WEEKHOURS)*OVERTIMERATE);


	}
	
	printf(" Gross Pay weekly is : %d\n", gross_pay);
	
	if (gross_pay <= 300)
	{
		total_tax = gross_pay * TAXRATE_300;


	}
	else if (gross_pay <= 450)
	{
		total_tax = 300* TAXRATE_300;
		total_tax += (gross_pay-300)* TAXRATE_300;

	}
	else
	{
		total_tax =  300* TAXRATE_300;
		total_tax += 150*TAXRATE_150;
		total_tax += (gross_pay-450)* TAXRATE_OTHER;
		

	}
		
	printf(" Total tax computed is : %.2f\n", total_tax);

	net_pay = gross_pay - total_tax;

	printf(" Net Pay amount is : %.2f\n", net_pay);




 

	return 0;

}
