#include "lists.h"

/**
* free_listint - Free Linked List
* @head: listint_t Lists Freed
*/
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
