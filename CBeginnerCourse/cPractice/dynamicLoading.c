#include<stdio.h>
#include<dlfcn.h>
#include<stdlib.h>
int main()
{
	
	void *handle = NULL;
	int (*num_char_string_ptr)(char *str, char searchCharacter);
	int (*remove_non_alpha_ptr)(char *source);
	int (*len_string_ptr)(char *source);
	char * (*str_cat)(char *str1, char *str2);
	void (*str_copy)(char *dest , char *src);
	char * (*sub_string)(char *source, char *sub_str);
	handle = dlopen("/Users/riteshtyagi/cPractice/lib_stringfunctions.so",RTLD_LAZY);
	char *error = NULL;
	if(handle == NULL)
	{
		fputs(dlerror(), stderr);
		exit(1);

	}	
	num_char_string_ptr  = dlsym(handle, "noOfCharactersInString");
	if((error = dlerror()) != NULL)
	{
		fputs(error, stderr);
		exit(1);

	}

	remove_non_alpha_ptr  = dlsym(handle, "removeNonAlphaCharacters");
	if((error = dlerror()) != NULL)
	{
		fputs(error, stderr);
		exit(1);

	}
		
	len_string_ptr  = dlsym(handle, "lengthOfString");
	if((error = dlerror()) != NULL)
	{
		fputs(error, stderr);
		exit(1);
	}
	
	str_cat  = dlsym(handle, "str_cat");
	if((error = dlerror()) != NULL)
	{
		fputs(error, stderr);
		exit(1);
	}
	
	str_copy  = dlsym(handle, "str_copy");
	if((error = dlerror()) != NULL)
	{
		fputs(error, stderr);
		exit(1);
	}
	sub_string  = dlsym(handle, "sub_string");
	if((error = dlerror()) != NULL)
	{
		fputs(error, stderr);
		exit(1);
	}
	char *ptr = "riteshtyagi";
	printf("The no of chars in the string %s are %d\n",ptr, num_char_string_ptr(ptr,'t'));
	char source[20] = "check_rhe1_#";
	remove_non_alpha_ptr(source);
	printf("After removing non alphanumberic from the string is %s\n",
	source);
	printf("The length of the above string is %d\n", (*len_string_ptr)(source));
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

	dlclose(handle);	
	return 0;

}
