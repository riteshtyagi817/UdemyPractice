#include<stdio.h>
#include<stdlib.h>
void allocateMemory(int **ptr)
{
	*ptr = malloc(sizeof(int));

}
int main()
{
	int *iptr = NULL;
	allocateMemory(&iptr);	
	*iptr = 23;
	printf("The value pointer pointing is %d\n", *iptr);
	free(iptr);
	



	return 0;
}
