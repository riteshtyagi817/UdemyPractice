#include<stdio.h>
#include "StringFunctions.h"
int main()
{
	char *ptr = "riteshtyagi";
	printf("The no of chars in the string %s are %d\n",ptr, noOfCharactersInString(ptr,'t'));
	char source[20] = "check_rhe1_#";
	printf("Going to find the alphanumeric chars from the string %s\n", source);
	removeNonAlphaCharacters(source);
	printf("After removing non alphanumberic from the string is %s\n",
	source);
	printf("The length of the above string is %d\n", lengthOfString(source));
	char *str1 = "ritesh";
	char *str2 = "tyagi";
	printf("After concatenation of the strings %s and %s the string is %s\n",str1,str2, str_cat(str1, str2));

	char dest[100]  = {0};
	str_copy(dest, str2);
	printf("after copying from source %s dest is %s\n", str2, dest);	
	printf("enter the substring to search in %s\n", str2);
	char sub_str[10];
	scanf("%s", sub_str);
	char *ptr1 = sub_string(str2, sub_str);
	if(ptr1 == NULL)
		printf("could not find the substring\n");
	else
		printf("substring found at %s\n", ptr1);
	
	return 0;

}
