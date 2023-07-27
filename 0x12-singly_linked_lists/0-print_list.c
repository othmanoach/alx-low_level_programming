#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of the linked list
 * @t: pointer to the list to print list_t
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *t)
{
	size_t s = 0;

	while (t)
	{
		if (!t->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", t->len, t->str);
		t = t->next;
		s++;
	}

	return (s);
}
