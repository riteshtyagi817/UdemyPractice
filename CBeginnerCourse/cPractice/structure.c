#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Item
{
	char *itemName;
	int quantity;
	float price;
	float amount;

};
void readItem(struct Item *item)
{
	printf("Enter the name of the product:");
	scanf("%s", item->itemName);
	printf("\nEnter the quantity:");
	scanf("%d", &item->quantity);	
	printf("\nEnter the price:");
	scanf("%f", &item->price);	

	return;
}
void printItem(struct Item *item)
{
	printf("Product name:%s\n",item->itemName);
	printf("Quantity:%d\n", item->quantity);
	printf("Price:%.2f\n", item->price);
	printf("Amount:%.2f\n", item->price*item->quantity);
	return; 


}
int main()
{
		
	struct Item *item = (struct Item *)calloc(1,sizeof(struct Item));
	if(item == NULL)
	{
		printf("Memory allocation failed\n");
		return 0;
	}
	item->itemName = (char *)calloc(30,sizeof(char));
	if(item->itemName == NULL)
	{
		
		printf("Memory allocation failed\n");
		return 0;

	}
	readItem(item);
	printItem(item);
	free(item->itemName);
	free(item);
	return 0;
		

}
