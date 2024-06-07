#include<stdio.h>
#include<string.h>

void sort_using_bubble_sort(char input[][20], int rows, int cols)
{
	char temp[20];
	for(int i = 0; i < rows;i++)
	{
		for(int j  = 0; j < rows-i-1;j++)
		if(strcmp(input[j], input[j+1]) > 0)
		{
			strncpy(temp, input[j], sizeof(temp)-1);
			strncpy(input[j], input[j+1], sizeof(input[j+1])-1);
			strncpy(input[j+1], temp, sizeof(input[j+1])-1);

		}
		


	}

	
	return;
}
int main()
{
	char input[10][20];
	printf("Input number of strings:");
	int no;
	scanf("%d",&no);
	printf("Now enter the strings one by one\n");
	
	for(int i = 0; i < no;i++)
	{
		scanf("%s", input[i]);


	}
	printf("You have entered the following strings\n");
	for(int i = 0; i < no;i++)
	{
		printf("%s\n", input[i]);

	}
	
	sort_using_bubble_sort(input, no, 20);
	printf("after sorring the strings:\n");	
	for(int i = 0; i < no;i++)
	{
		printf("%s\n", input[i]);

	}
	strcat(input[0], "ritesh");
	printf("%s", input[0]);
	strncat(input[0],"banti", 4);
	
	printf("%s", input[0]);
	return 0;

}
