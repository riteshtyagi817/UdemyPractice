#include<stdio.h>
int main()
{
	int i = 10;
	float f = 67.65;
	char c = 'd';
	
	void *ptr = NULL;
	ptr = &i;
	printf("The value of int variable using void pointer is %d\n", *(int *)ptr);
	ptr = &f;
	printf("The value of float variable using void pointer is %.2f\n", *(float *)ptr);
	ptr = &c;
	printf("The value of char variable using void pointer is %c\n", *(char *)ptr);
	
	return 0;
}
