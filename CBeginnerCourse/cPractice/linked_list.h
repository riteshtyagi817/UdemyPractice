#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
        int data;
        struct Node *next;

}ListNode;
typedef ListNode * ListNodePtr;


void insert_node_at_begin(ListNodePtr *head);
void insert_node_at_end(ListNodePtr *head);
void insert_node_at_position(ListNodePtr *head);
void delete_node_at_position(ListNodePtr *head);
void update_node_value(ListNodePtr *head);
void search_element_in_list(ListNodePtr *head);
void display_list(ListNodePtr *head);
