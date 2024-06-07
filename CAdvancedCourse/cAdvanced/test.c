#include<stdio.h>
int main()
{
	int val1 = 2;
	int val2 = 5;
	
	printf(" val1 = %d val2 = %d\n", val1 , val2);

	val1 ^= val2;
	val2 ^= val1;
	val1 ^= val2;

	
	printf(" val1 = %d val2 = %d\n", val1 , val2);
	return 0;


}
