#include "lists.h"

/**
 * delete_nodeint_at_index - functiondelete the node at index
 * @index: index of node to be deleted
 * @head: pointer to the head
 * Return: 1 if succeed, -1 on failure.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int b;

	listint_t *node, *prevnode;

	if (head == NULL || *head == NULL)
		return (-1);
	node = *head;
	if (index == 0)
	{
		*head = node->next;
		free(node);
		return (1);
	}
	prevnode = node;
	node = node->next;
	for (b = 1; b < index; b++)
	{
		if (node == NULL)
			return (-1);
		prevnode = node;
		node = node->next;
	}
	prevnode->next = node->next;
	free(node);
	return (1);
}
