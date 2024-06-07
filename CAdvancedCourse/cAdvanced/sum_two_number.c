#include<stdio.h>


int sum(int value)
{
	static int sum_val = 0;
	sum_val += value;



	return sum_val;
}

int main()
{
	printf("%d\n", sum(25));
	printf("%d\n", sum(15));
	printf("%d", sum(30));

	



	return 0;

}
