#include "linked_list.h"
void insert_node_at_begin(ListNodePtr *head)
{
	printf("Enter the value\n");
	int value  = 0;
	scanf("%d", &value);
	
	ListNodePtr new_node = (ListNodePtr)malloc(sizeof(ListNode));
	new_node->data = value;
	new_node->next = NULL;
	if(*head == NULL)
	{
		*head  = new_node;


	}
	else
	{
		new_node->next = *head;
		*head = new_node;
		
	}

	return;
}
void insert_node_at_end(ListNodePtr *head)
{
	
	printf("Enter the value\n");
	int value  = 0;
	scanf("%d", &value);
	
	ListNodePtr new_node = (ListNodePtr)malloc(sizeof(ListNode));
	new_node->data = value;
	if(*head == NULL)
	{
		*head  = new_node;

	}	
	else
	{
		ListNodePtr temp  = *head;
		while(temp->next != NULL)	
			temp = temp->next;
		temp->next = new_node;
		


	}
	return;
}
void insert_node_at_position(ListNodePtr *head)
{
	
	printf("Enter the value\n");
	int value  = 0;
	scanf("%d", &value);

	printf("Enter the position\n");
	int pos  = 0;
	scanf("%d", &pos);
	
	ListNodePtr new_node = (ListNodePtr)malloc(sizeof(ListNode));
	new_node->data = value;
	if(pos < 1)
	{
		printf("Invalid position\n");
		return;

	}
	if(pos == 1)
	{
		
		insert_node_at_begin(head);


	}
	else 
	{
		pos--;
		ListNodePtr temp = *head;
		ListNodePtr prev = NULL;
		while(pos-- && temp)
		{
			prev = temp;
			temp = temp->next;


		}
		new_node->next = temp;
		prev->next = new_node;
		return;

	}
	return;

}
void delete_node_at_position(ListNodePtr *head)
{	

	printf("Enter the position\n");
	int pos  = 0;
	scanf("%d", &pos);
	if(*head == NULL) return;
	if(pos == 0)
	{
		printf("invalid pos\n");
		return;
	}
	else
	{
		pos--;
		ListNodePtr temp = *head;
		ListNodePtr prev = NULL;
		if(pos == 0)
		{
			*head = (*head)->next;
			free(temp);
			temp = NULL;
			return;
		}
		while(pos-- && temp)
		{
			prev = temp;
			temp  = temp->next;

		}
		if(temp)
		{
			prev->next = temp->next;
			free(temp);
			temp = NULL;
		}
		else
		{
			prev->next = NULL;
			


		}
		return;


	}
	return;

}	
void update_node_value(ListNodePtr *head)
{
	printf("Enter the value which is to be updated\n");
	int old_value = 0;
	scanf("%d",&old_value);
	printf("Enter the new value which for updation\n");
	int new_value = 0;
	scanf("%d", &new_value);

	ListNodePtr temp = *head;
	while(temp && temp->data != old_value)
	{
		temp = temp->next;
		

	} 
	if(temp)
	{
		temp->data = new_value;

	}
	else 
		printf("value not found\n");

	
	return;
}
void search_element_in_list(ListNodePtr *head)
{
	
	printf("Enter the value which is to be searched\n");
	int value = 0;
	scanf("%d",&value);
	ListNodePtr temp = *head;
	while(temp && temp->data != value)
	{
		temp = temp->next;
		

	} 
	if(temp)
	{
		printf("value found\n");
	}
	else
	{
		printf("value not found\n");


	}
	return;
	
}
void display_list(ListNodePtr *head)
{
	ListNodePtr temp = *head;
	while(temp != NULL)
	{
		printf(" %d ", temp->data);
		temp = temp->next;


	}
	printf("\n");

	return;

}
