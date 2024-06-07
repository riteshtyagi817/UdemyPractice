#include<stdio.h>
#include<stdarg.h>
#include<string.h>
void my_print_function(const char *str, ...)
{
	va_list va_ptr;
	va_start(va_ptr,str);
	char temp[100];
	strcpy(temp,str);
	int count = 0;
	int i = 0;
	while(temp[i] != '\0')
	{
		if(temp[i] == '%') count++;
		i++;

	}
	int index = 0;
	while(str[index] != '\0')
	{
		
		if(str[index] == '%')
		{
			
			index++;
			if(str[index] == 'c')
			{
				char ch = va_arg(va_ptr, char);		
				putchar(ch);


			}	
			else if(str[index] == 'd')
			{
				int value = va_arg(va_ptr, int);		
				int power = 1;
				int rev = 0;
				int copy = value;
				while(copy)
				{
					rev =  (rev*10) + (copy%10);
					copy /= 10;


				}
				value = rev;
				while(value)
				{
					putchar(value%10 + '0');
					value /= 10;
				}	


			}
				

	
		}
		else
		{
			putchar(str[index]);


		}
		index++;


	}

	va_end(va_ptr);
	return;

}
int main()
{
	my_print_function("printing %d %c\n", 5,'b');

	my_print_function("printing %d %d %d\n", 5, 63,3);

	my_print_function("printing %c %c\n", 'a','b');
	return 0;

}
