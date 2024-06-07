#include<stdio.h>
#include<ctype.h>
#define IS_UPPER(c) \
(isupper(c))
#define IS_LOWER(c) \
(islower(c))
#define IS_ALPHA(c) (isalpha(c))
#define IS_NUM(c) (isdigit(c))
#define IS_ALPHANUMERIC(c) \
(IS_ALPHA(c) || IS_NUM(c))
int main()
{
	printf("Enter any character: ");
	char c;
	c = getchar();
	printf("'%c' is ",c);
	if(!IS_ALPHANUMERIC(c))
		printf("not a valid character\n");
	
	if(IS_UPPER(c))
		printf("uppercase\n");
	else printf("lowercase\n");

	



	return 0;
}
