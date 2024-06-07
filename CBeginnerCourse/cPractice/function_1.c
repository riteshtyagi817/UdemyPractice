#include<stdio.h>

int gcd_two_numbers(int first, int second);
float absolute_value(float num);

float square_root(float number);

int main()
{
	int first;
	int second;
	printf("Enter the two numbers to find the gcd \n");
	scanf("%d%d",&first,&second); 
	printf(" gcd of numbers %d and %d is %d\n", first, second, gcd_two_numbers(first, second));
	printf(" Enter the number for the absolute value\n");
	float value = 0.0;
	scanf("%f", &value);
	
	printf(" The result is  %.2f\n ", absolute_value(value));
	printf(" enter the value for which you want to find the square root\n");
	float number = 0.0;
	scanf("%f", &number);
	printf(" the square root is %.2f\n", square_root(number));
	return 0;
	
}
int gcd_two_numbers(int first, int second)
{
	int temp = 0;
	while(second != 0)
	{
		temp = first % second;
		first = second;
		second = temp;
	}
	return first;
	

}
float absolute_value(float num)
{
	if(num < 0)
	{
		num = -num;

	}

	return num;


}
float square_root(float number)
{
	
	const float epsilon  = 0.00001;
	float guess = 1.0;
	float returnValue = 0.0;
	
	if(number < 0){
	printf(" Negative argument to square root function\n");
	returnValue = -1.0;

	}
 	else
	{
		while(absolute_value(guess*guess - number) >= epsilon)
		guess = (number/guess + guess)/2.0;
		
		returnValue = guess;


	}

	return returnValue;


}
