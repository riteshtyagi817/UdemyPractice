#include<stdio.h>
#include<stdlib.h>
int comp_function(const void *first, const void *second); 

int main()
{
	

	int data[]  = {67,5,-1,2,3,4,87,34,54,33,23,22,21};
	int n = sizeof(data)/sizeof(data[0]);
	for(int i = 0; i < n;i++) printf(" %d ", data[i]);
	printf("\n");
	qsort(data, n, sizeof(int), comp_function);
	printf("after the sorting\n");
	for(int i = 0; i < n;i++) printf(" %d ", data[i]);
	printf("\n");
	return 0;


}
int comp_function(const void *first, const void *second)
{
	const int i1 = *((int *)first);
	const int i2 = *((int *)second);
	return i1 - i2;

}
