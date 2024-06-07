#include<stdio.h>
int main()
{
	int length;
	printf(" Enter the no of elements to find the sum: ");
	scanf("%d", &length);
	int arr[length];
	printf(" Now enter the elements one by one\n");
	for(int i = 0; i < length;i++)
	{
		scanf("%d", &arr[i]);

	}

	printf(" printing the sum\n");
	int sum  = 0;
	for(int i = 0; i < length;i++)
	{
		sum += arr[i];

	}
	printf("The sum is %d", sum);
	return 0;

}
