#include "lists.h"

/**
 * pop_listint - function deletes the head node
 * @head: pointer to head
 * Return: Always 0 if linked list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *main_head;
	int n;

	main_head = *head;

	if (*head == NULL)
	{
		return (0);
	}
	n = (*head)->n;
	(*head) = (*head)->next;
	free(main_head);

	return (n);
}
