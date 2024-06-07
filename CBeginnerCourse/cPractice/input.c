#include<stdio.h>
#include<ctype.h>
int main()
{
	char ch;
	ch = getchar();
	while((isspace(ch = getchar())));
	
	ungetc(ch,stdin);	 
	printf("character is %c\n",getchar());
		
	printf("character is %c\n",getchar());


	return 0;

}
