#include<stdio.h>
int convertBinaryToDecimal(long long bin)
{
	int power = 1;
	int dec = 0;
	int digit = 0;
	while(bin)
	{
			
		digit = bin%10;
		dec += (digit*power);
		power *= 2;
		bin /= 10;

	}	
	return dec;






}
long long convertDecimalToBinary(int dec)
{
		long long sum = 0;
		long long power = 1;
		int digit = 0;
		while(dec)
		{
			
			digit = dec%2;
			sum += (digit*power);
			dec /= 2;
			power *= 10;

		}
	
		return sum;




}
int main()
{
	int input;	
	printf("Enter the number\n");
	scanf("%d",&input);
	printf("you entered the number %lld\n",convertDecimalToBinary(input)); 
	int n = 0;
	printf("Enter the nth value from the right\n");
	scanf("%d", &n);
	int mask = 1 << n;
	if(mask & input)
	{
		printf("%d bit is already set\n", n);

	}
	else
	{
		printf("%d bit is not set, will set it \n", n);


	}
	int result = 0;
	result = input|mask;
	
	printf("before setting the bit number is %lld\n", convertDecimalToBinary(input));
	printf("after setting the bit number is %lld\n", convertDecimalToBinary(result));
	

	return 0;

}
