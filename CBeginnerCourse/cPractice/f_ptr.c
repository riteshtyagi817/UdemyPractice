#include<stdio.h>
void func1(int);
void func2(int);
typedef void (*FunType)(int);
int main()
{
	FunType fptr = NULL;
	fptr = func1;
	(*fptr)(30);
	fptr = func2;
	fptr(12);
	return 0;
}
void func1(int arg)
{
	printf("Argument passed to the function is %d\n", arg);
	

	return ;
}
void func2(int arg1)
{
	printf("argument passed to the function is %d\n", arg1);


	return ;
}
