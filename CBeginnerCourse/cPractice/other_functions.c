#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<assert.h>
void show_array(int *arr,int n)
{
	for(int i = 0; i < n;i++)
	{
		printf(" %d ", arr[i]);

	}
	printf("\n");
	return;


}
int main()
{
	int data[] = {2,3,4,54,2,12,434};
	int n = sizeof(data)/sizeof(data[0]);
	printf("before memcpy\n");
	int target[100];
	show_array(data, n);

	float data1[] = {1,2.2,3.3,4.5,6.5,4.5};	
	memcpy(target, data1, n*sizeof(int));
	printf("after memcpy\n");
		
	show_array(target, n);
		
	printf("after memmove\n");

	memmove(data+2,data,4*sizeof(int));
	
	show_array(data,n);
	char *ptr  = "tyagi";
	char *tar = NULL;
	tar = strndup(ptr,4);
	printf("printing using the strdup function is %s\n", tar);	



	return 0;

}
