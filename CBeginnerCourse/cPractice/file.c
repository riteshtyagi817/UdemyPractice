#include<stdio.h>
#include<stdbool.h>
#include<math.h>
#include<stdlib.h>
bool check_prime(int n)
{
	if(n == 1)return false;
	if(n == 2) return true;
	if(n == 3) return true;
	for(int i = 3;i <= sqrt(n);i++)
	{
		if(n%i == 0)return false;
	}
	return true;

	
}

int main()
{
	FILE *fp = NULL;
	fp = fopen("numbers.txt", "r");
	if(fp == NULL)
	{
		perror("Could not open file for reading\n");
		exit(-1);
	}
	printf("File opened successfully.Reading integers from the file\n");
	int number = 0;
	while(!feof(fp))
	{
		fscanf(fp,"%d",&number);
		if(number%2 == 0)
		{
			printf("Number is even: %d\n",number); 

		}
		if(number % 3 == 0)
		{
			
			printf("Number is odd: %d\n",number); 

		}
		if(number > 0 && check_prime(number))
		{
			printf("Number is prime: %d\n", number);

		}


	}
	fclose(fp);


	return 0;

}
