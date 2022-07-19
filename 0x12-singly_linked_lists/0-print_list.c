#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints all the elements of a list_t list
 * @p: pointer to the start of the list
 * Return: number of nodes in the list
 */
size_t print_list(const list_t *p)
{
	size_t nodes = 0;

	while (p)
	{
		if (p->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", p->len, p->str);
		nodes++;
		p = p->next;
	}
	return (nodes);
}
