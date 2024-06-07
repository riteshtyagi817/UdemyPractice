#include<stdio.h>
#include<stdbool.h>
int main()
{
	int primes[100] = {0};
	int prime_index = 2;
	primes[0] = 2;
	primes[1] = 3;
	int i = 0;
	bool is_prime = false;
	for(int p = 5;p <= 100;p = p+2)
	{
		is_prime = true;
		for(i = 1;is_prime && p/primes[i] >= primes[i];++i)
		{
			if(p%primes[i] == 0)
			{
				is_prime = false;
				break;

			}
			


		} 
		if(is_prime == true)
		{
			primes[prime_index] = p;
			prime_index++;

		}
		


	}
	for(i = 0; i < prime_index;i++)
	{
		printf(" %dth prime is %d\n", i+1, primes[i]);


	}
	return 0;



}
