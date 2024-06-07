#include<stdio.h>
#include<string.h>
struct onscreen_box
{
	unsigned int:4;
	unsigned int a:1;
	unsigned int color:3;
	unsigned int:1;
	unsigned int border:1;	
	unsigned int border_color:3;
	unsigned int border_style:2;
	

};

int main()
{

	struct onscreen_box box;
	box.a = 0;
	box.color = 0;
	box.border = 0;
	box.border_color = 0;
	box.border_style = 0;
	printf("Original box settings\n");
	
	printf("Box is %s\n",box.a == 0?"opaque":"transparent");
	char col[50];
	memset(col,0,50);
	switch(box.color)
	{
		case 0:
		strcpy(col,"Black");
		break;
		case 1:
		strcpy(col,"Red");
		break;
		case 2:
		strcpy(col,"Green");
		break;
		case 3:
		strcpy(col,"Yellow");
		break;
		case 4:
		strcpy(col,"Blue");
		break;
		case 5:
		strcpy(col,"Magenta");
		break;
		case 6:
		strcpy(col,"Cyan");
		break;
		case 7:
		strcpy(col,"White");
		break;
		default:
		strcpy(col,"invalid color");
		break;
			
	} 
	
	printf("The fill color is %s\n",col);
	
	printf("Border is %s\n",box.border == 0?"shown":"hidden");
	
	memset(col,0,50);
	switch(box.border_color)
	{
		case 0:
		strcpy(col,"Black");
		break;
		case 1:
		strcpy(col,"Red");
		break;
		case 2:
		strcpy(col,"Green");
		break;
		case 3:
		strcpy(col,"Yellow");
		break;
		case 4:
		strcpy(col,"Blue");
		break;
		case 5:
		strcpy(col,"Magenta");
		break;
		case 6:
		strcpy(col,"Cyan");
		break;
		case 7:
		strcpy(col,"White");
		break;
		default:
		strcpy(col,"invalid color");

	}

	printf("The border color is %s\n", col);
	printf("The Border style is %s\n",box.border_style == 0?"solid":(box.border_style == 1)?"dotted":"dashed");
	


	box.a = 1;
	box.color = 4;
	box.border = 1;
	box.border_color = 6;
	box.border_style = 1;

	
	printf("Box is %s\n",box.a == 0?"opaque":"transparent");
	memset(col,0,10);
	switch(box.color)
	{
		case 0:
		strcpy(col,"Black");
		break;
		case 1:
		strcpy(col,"Red");
		break;
		case 2:
		strcpy(col,"Green");
		break;
		case 3:
		strcpy(col,"Yellow");
		break;
		case 4:
		strcpy(col,"Blue");
		break;
		case 5:
		strcpy(col,"Magenta");
		break;
		case 6:
		strcpy(col,"Cyan");
		break;
		case 7:
		strcpy(col,"White");
		break;
		default:
		strcpy(col,"invalid color");
		break;
			
	} 
	
	printf("The fill color is %s\n",col);
	
	printf("Border is %s\n",box.border == 0?"shown":"hidden");
	
	memset(col,0,10);
	switch(box.border_color)
	{
		case 0:
		strcpy(col,"Black");
		break;
		case 1:
		strcpy(col,"Red");
		break;
		case 2:
		strcpy(col,"Green");
		break;
		case 3:
		strcpy(col,"Yellow");
		break;
		case 4:
		strcpy(col,"Blue");
		break;
		case 5:
		strcpy(col,"Magenta");
		break;
		case 6:
		strcpy(col,"Cyan");
		break;
		case 7:
		strcpy(col,"White");
		break;
		default:
		strcpy(col,"invalid color");

	}

	printf("The border color is %s\n", col);
	printf("The Border style is %s\n",box.border_style == 0?"solid":(box.border_style == 1)?"dotted":"dashed");
	

		
	return 0;
}
