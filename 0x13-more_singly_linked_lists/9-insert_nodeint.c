#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node
 * @idx: index of list where new node should be added
 * @head: pointer to the head
 * @n: data to be added
 * Return: address of new node, or NULL on failure
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int b;
	listint_t *newnode, *temp;

	newnode = (listint_t *)malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

	temp = *head;

	for (b = 0; b < idx - 1 && temp != NULL; b++)
		temp = temp->next;

	if (temp == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->next = temp->next;
	temp->next = newnode;
	return (newnode);
}