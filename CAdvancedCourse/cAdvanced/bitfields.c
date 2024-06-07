#include<stdio.h>
struct onscreen_box
{
	int prop:1;
	int fill_color:3;
	int :4;
	int border:1;
	int border_color:3;
	int border_style:2;
	int :4;





};
void show_color(int value)
{
	switch(value)
	{
		case 0:
			printf("Black");
			break;

		case 1:
			printf("Red");
			break;
		case 2:
			printf("Green");
			break;
		case 3:
			printf("Yellow");
			break;
		case 4:
			printf("Blue");
			break;
		case 5:
			printf("Magenta");
			break;
		case 6:
			printf("Cyan");
			break;
		case 7:
			printf("White");
			break;
		
		case default:
			printf("invalid choice");

	}
	return ;


}


int main()
{
	struct onscreen_box box1;
	box1.prop = 0;
	box1.fill_color = 3;
	box1.border = 1;
	box1.border_color = 2;
	box1.border_style = 2;
	
	printf("Original box settings:\n");
	printf("Box is %s\n",box1.prop == 0?"opaque":"transparent");
		

	printf("Border is %s\n",box1.border == 0?"hidden":"shown");
	
	printf("The border style is %s\n",box1.border == 0?"solid":(box1.border == 1)?"dotted":"dashed");
	




	return 0;
}
