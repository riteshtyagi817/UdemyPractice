#include<stdio.h>
#include<stdlib.h>

int main()
{
	char *input = NULL;
	printf("Enter the no of characters you want to print\n");
	int length = 0;
	scanf("%d", &length);
	input = (char *)malloc((length+1)*sizeof(char));
	if(input)
	{
		printf("enter the  %d no of characters\n", length);
		scanf("%s", input);
		printf("Your input string is %s\n", input);

	}
	else
	{
		printf("Memory could not be allocated\n");
	

	}
	if(input)
	{
		free(input);
		input = NULL;

	}

	return 0;


}


