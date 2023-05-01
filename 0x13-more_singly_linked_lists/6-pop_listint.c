#include "lists.h"

/**
* pop_listint - Delete the Head node of a linked list
* @head: Point to the first element in the linked list
*
* Return: Data inside the elements that was Deleted,
* or 0 if the list is Empty
*/
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
