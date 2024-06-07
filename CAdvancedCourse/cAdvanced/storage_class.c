#include<stdio.h>
static double glob_this_file;
static float glob;
static int  demo();
int main()
{
	{
		int x;
	}
	static float y;	
	register int r;
	printf("%d\n",demo()); 
	



	return 0;

}
static int demo()
{

	return 5;
}
