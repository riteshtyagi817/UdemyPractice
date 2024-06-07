#include<stdio.h>
long long dec_binary(int first)
{
	int power = 1;
	long long result = 0;
	while(first != 0)
	{
		int last_digit = first%2;
		result += (last_digit*power);
		power *= 10;
		first /= 2;

	}
	return result;
	


}
int main()
{
	int first = 0;
	int second = 0;
	printf(" Enter an integer: ");
	scanf("%d", &first);
	printf(" Enter another integer: ");
	scanf("%d", &second);	
	printf(" The first number is: %lld\n",dec_binary(first)); 

	printf(" The second number is: %lld\n",dec_binary(second)); 

	int result1 = ~(first);
	int result2 = ~(second);


	printf("Displaying the results of negation operator and showing the results: first %lld, second  %lld\n",dec_binary(result1), dec_binary(result2));
	int result = first & second;
	  
	printf("Displaying the results of & operator and showing the results: %lld\n", dec_binary(result));
	result = first | second;
	
	printf("Displaying the results of | operator and showing the results: %lld\n", dec_binary(result));
	result  = first ^ second;
	
	printf("Displaying the results of ^ operator and showing the results: %lld\n", dec_binary(result));

	result1 = first >> 2;
	result2 = first << 2;
	
	printf("Displaying the results of >> and << by 2 on first and showing the results: first %lld, second  %lld\n",dec_binary(result1), dec_binary(result2));
	
	result1 = second >> 2;
	result2 = second << 2;
	
	printf("Displaying the results of >> and << by 2 on second and showing the results: first %lld, second  %lld\n",dec_binary(result1), dec_binary(result2));
	return 0;
}
