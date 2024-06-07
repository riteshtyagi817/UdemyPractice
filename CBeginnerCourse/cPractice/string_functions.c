#include<stdio.h>
#include<string.h>
void print_reverse_string(char input[])
{
	for(int i = strlen(input)-1;i >= 0 ;i--)
	{
		printf("%c", input[i]);

	}
	return;


}


int main()
{
	char input[100];
	printf("Enter the string which you want to reverse\n");
	scanf("%s", input);
	printf("String before reverse is %s\n", input);
	printf("String after reverse is: ");
	print_reverse_string(input);	
	printf("\n");

	return 0;
}
