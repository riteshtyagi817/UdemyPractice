#include<stdio.h>
#include<math.h>
#include<string.h>
int sum_1_to_n(int n)
{
	if(n == 1) return n;
	return n+sum_1_to_n(n-1);

}
int gcd(int first, int second)
{
	if(first != second)
	{
		if(first  > second)
			return gcd(first - second, second);
		else
			return gcd(first, second - first);



	}
	return first;
}
void reverse_string(char * const str, int len)
{
	static  int index = 0;
	if(index >= len)return ;
	char temp = str[index];
	str[index] = str[len];
	str[len] = temp;
	index++;
	reverse_string(str,len-1);	
	return;
	




}
int main()
{
	printf("Enter the value of n for which you want the sum from 1\n");
	int n;
	scanf("%d",&n);
	printf("The sum of 1 to %d is %d\n", n, sum_1_to_n(n));
	printf("Enter the two numbers to find the gcd\n");
	int a, b;
	scanf("%d%d",&a,&b);
	printf("The gcd of the numbers %d and %d are %d\n", a,b,gcd(a,b));
	char string[100];
	printf("Enter the string to reverse\n");
	scanf("%s", string);
	reverse_string(string, strlen(string)-1);	
	printf("The reverse of the string is %s\n",string);

	return 0;

}
