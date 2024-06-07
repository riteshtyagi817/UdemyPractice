#include<stdio.h>
#include<math.h>
#include<complex.h>
struct point
{
	int x;
	int y;

};
int main()
{
	struct point p = {.y = 4,.x = 5};

	int a[6] = {[0 ... 2]=1, [3]=15,56};

	for(int i = 0; i< 6;i++)
		printf(" %d ", a[i]);

	printf("\n");
	
	double PI = acos(-1);
	double complex a1 = exp(I*PI);
	
	printf("Complex number is %.2f%+.2f\n", creal(a1), cimag(a1));


	return 0;





}
