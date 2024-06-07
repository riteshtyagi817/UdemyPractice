#include<stdio.h>
#include<stdlib.h>
struct s
{

	int length;
	int arr[];


};
int main()
{
	int size;
	printf(" Enter the size of array of the structure\n");
	scanf("%d", &size);
	
	struct s *ptr = NULL;
	ptr = malloc(sizeof(struct s) + size*sizeof(int));
	

	ptr->length = 5;
	for(int i = 0; i < ptr->length;i++)
	{
		ptr->arr[i] = i+1;


	}	
	for(int i = 0; i < ptr->length;i++)
	{
		printf(" %d ", ptr->arr[i]);

	}


	return 0;
}
