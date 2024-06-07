#include<stdio.h>
#define SQUARE(x) (x*x)
#define CUBE(y) SQUARE(y)*y
int main()
{
	printf("Enter any number to find square and cube\n");
	int input;
	scanf("%d", &input);	
	printf("SQUARE(%d) %d\n", input, SQUARE(input));
	printf("CUBE(%d) %d\n", input, CUBE(input));


	return 0;
}
