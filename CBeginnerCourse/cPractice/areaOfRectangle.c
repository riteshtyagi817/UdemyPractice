#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
	printf(" the number of command line arguements are %d\n ", argc);
	printf(" the name of the program is %s\n ", argv[0]);
	double length = atoi(argv[1]);
	double width =  atoi(argv[2]);
	double area = 0.0;
	double perimeter = 0.0;
	
	area = length*width;
	perimeter = 2.0*(length + width);
	printf(" with length %.2f and width %.2f -> The area of the Rectangle is : %.2f\n", length, width, area);	
	printf(" with length %.2f and width %.2f -> The perimeter of the Rectangle is : %.2f\n", length, width, perimeter);
	return 0;

}
