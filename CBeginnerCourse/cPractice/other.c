#include<stdio.h>
#include<setjmp.h>
jmp_buf buf;
void error_recovery()
{
	printf("Error\n");
	longjmp(buf, 56);
	printf("This line will not print\n");

	return;



}
int main()
{
	int i = 0;
	for(;;)
	{
		int i = setjmp(buf);
		if(i == 0)
		{
			error_recovery();

		}

	}




	return 0;
}	
