#include "lists.h"

/**
 * get_nodeint_at_index - function returns the nth node
 * @head: pointer to head
 * @index: index of node, starting at 0
 * Return: NULL if the node doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int b = 0;
	listint_t *node;

	node = head;

	while (node != NULL && b != index)
	{
		b++;
		node = node->next;
	}
	if (b == index)
		return (node);

	return (NULL);
}
