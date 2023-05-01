#include "lists.h"

/**
 * free_listint2 - funtion frees a list
 * @head: double pointer
 * Return: not mention
 */

void free_listint2(listint_t **head)
{
	listint_t *list;

	while (*head != NULL)
	{
		list = *head;
		*head = (*head)->next;
		free(list);
	}
}
