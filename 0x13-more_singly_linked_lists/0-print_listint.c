#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a lst_t ist.
 * @h: head of a list
 * Return: numbers of nodes inbthe list.
 */

size_t print_listint(const listint_t *h)
{

	size_t couunt = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);/* (*h).n */
		h = h->next;/* (h).next*/
		count++;
	}

	return (count);

}
