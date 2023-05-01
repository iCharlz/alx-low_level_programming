#include "lists.h"

/**
* print_listint - Print the elements of a Linked List
* @h: Linked List of type listint_t to Print
*
* Return: num of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
