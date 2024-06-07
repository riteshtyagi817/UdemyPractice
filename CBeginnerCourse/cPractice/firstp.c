#include<stdio.h>
#include<stdbool.h>
int main(){

	_Bool flag = 4;
	bool myBool = true;
	int myFavoriteNumber = 0;	
	printf(" Please enter your favorite number\n");
	
	scanf("%d", &myFavoriteNumber);
	
	printf("You entered number: %d\n", myFavoriteNumber);
	
	return 0;
}
