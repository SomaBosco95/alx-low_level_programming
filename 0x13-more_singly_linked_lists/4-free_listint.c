#include "lists.h"

/**
 * free_listint - function frees the list
 * @head: pointer to head
 * Return: not mention
 */

void free_listint(listint_t *head)
{
	listint_t *node;

	while ((node = head) != NULL)
	{
		head = head->next;
		free(node);
	}
}
