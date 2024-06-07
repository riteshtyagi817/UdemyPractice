#include<stdio.h>
int loop_counter = 0;
extern void display();
int main()
{
	for(loop_counter = 0; loop_counter < 5;loop_counter++)
	{
		display();

	}



	return 0;
}
