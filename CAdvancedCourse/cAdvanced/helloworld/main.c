#include<stdio.h>
#include"getnum.h"
int glob;
int main()
{
	int value  = get_number();
	printf(" %d\n", value);
	printf("%d", glob);
	return 0;


}
