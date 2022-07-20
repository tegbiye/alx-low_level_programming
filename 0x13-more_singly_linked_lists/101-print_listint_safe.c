#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * reverse_listint - prints a listint_t linked list.
 * @head: pointer to the list.
 * Return: number of nodes in the list.
 **/
size_t print_listint_safe(const listint_t *head)
{
size_t safe = 0;
const listint_t *aux_node = head;

if (!head)
	exit(98);

while (aux_node)
{
printf("[%p] %i\n", (void *)aux_node, aux_node->n);
aux_node = aux_node->next;
safe++;
}
return (safe);
}
