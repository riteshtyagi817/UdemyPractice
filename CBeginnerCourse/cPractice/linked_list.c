#include<stdio.h>
#include "linked_list.h"
int main()
{
	int choice = 0;
	ListNodePtr head = NULL;
	do
	{
		printf("--------------------------------------\n");
		printf("     Operations on linked list        \n");
		printf("--------------------------------------\n");
		printf("1. Insert Node at beginning\n");	
		printf("2. Insert Node at End\n");
		printf("3. Insert Node at a specific position\n");
		printf("4. Delete Node from any position\n");
		printf("5. Update Node value \n");
		printf("6. Search Element in the linked list\n");
		printf("7. Display List\n");
		printf("8. Exit \n");	
		printf("--------------------------------------");
		printf("Enter your choice: ");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1:
			insert_node_at_begin(&head);
			break;
			case 2:
			insert_node_at_end(&head);
			break;
			case 3:
			insert_node_at_position(&head);
			break;
			case 4:
			delete_node_at_position(&head);
			break;
			case 5:
			update_node_value(&head);
			break;
			case 6:
			search_element_in_list(&head);
			break;
			case 7:
			display_list(&head);
			break;
			case 8:
			break;
			default:
			printf("Invalid choice\n");	


		}

	}while(choice != 8);
	printf("Exiting the program\n");
	


	return 0;
}
