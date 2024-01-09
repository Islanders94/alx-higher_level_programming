#include "lists.h"

/**
 * palindrom -  recursive palindrom or no
 * @head: head list
 * Return: 0 if it's not a palindr
 * 1 if it is a palindr
 */
int is_palindrome(listint_t **head)
{
	if (head == NULL || *head == NULL)
		return (1);
	return (aux_palind(head, *head));
}

/**
 * aux_palind - function to know if is palindr
 * @head: head list
 * @end: end list
 */
int aux_palind(listint_t **head, listint_t *end)
{
	if (end == NULL)
		return (1);
	if (aux_palind(head, end->next) && (*head)->n == end->n)
	{
		*head = (*head)->next;
		return (1);
	}
	return (0);
}
