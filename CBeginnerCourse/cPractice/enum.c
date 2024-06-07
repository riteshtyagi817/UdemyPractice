#include<stdio.h>
int main()
{
	
	enum Company {GOOGLE, FACEBOOK, XEROX, YAHOO = 12, EBAY, MICROSOFT};
	
	enum Company firstCompany;
	enum Company secondCompany;
	enum Company thirdCompany;


	firstCompany = XEROX;
	secondCompany = GOOGLE;
	thirdCompany = EBAY;

	printf(" value of XEROX is %d\n", firstCompany);

	printf(" value of GOOGLE is %d\n", secondCompany);
	
	printf(" value of EBAY is %d\n", thirdCompany);


	return 0;




}
