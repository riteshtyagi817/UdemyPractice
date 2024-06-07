#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int noOfCharactersInString(char *str, char searchCharacter)
{
	int count = 0;
	int index = 0;
	while(str[index++] != '\0')
	{
		if(str[index] == searchCharacter)
		{
			count++;
		}


	}



	return count;
}
int removeNonAlphaCharacters(char *source)
{
	int len = strlen(source);
	char *copy = (char *) calloc(len+1, sizeof(char));
	strcpy(copy, source);
	
	int index = 0;
	int i = 0;
	while(copy[index++] != '\0')
	{
		if(isalnum(copy[index])) source[i++] = copy[index];
		
	}	
	source[i] = '\0';

	return 0;

}
int lengthOfString(char *source)
{
	int count = 0;
	int index = 0;
	while(source[index++] != '\0')
		count++;


	return count;
}
char *str_cat(char *str1, char *str2)
{
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	char *result =(char *)malloc(len1+len2+1*sizeof(char));
	int index = 0;
	int res_idx = 0;
	while(str1[index] != '\0') 
	{
		result[res_idx++] = str1[index];
		index++;
	}
	index = 0;
	while(str2[index] != '\0')
	{
		result[res_idx++] = str2[index];
		index++;
	
	}
	result[res_idx] = '\0';
	return result;


}
void str_copy(char *dest , char *src)
{
	int index = 0;
	while(src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	

	dest[index] = '\0';




}
char *sub_string(char *source, char *sub_str)
{
	char *ptr ;
	int index = 0;
	int idx_sub = 0;
	while(source[index] != '\0' && sub_str[idx_sub] != '\0')
	{
		ptr = NULL;
		while(source[index] == sub_str[idx_sub])
		{
			if(ptr == NULL) ptr = &source[index];
			index++;
			idx_sub++;
			

		}
		if(sub_str[idx_sub] == '\0')
		{
			break;

		}
		index++;

	}
	if(sub_str[idx_sub] == '\0' && ptr != NULL)
	{	
		return ptr;

	}
	else return NULL;


}









