#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: Adress of the head of the linked list
 * @n: integer to assing in the new node
 * Return: Pointer of the address
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *p;

	if (head == NULL)
	{
		return (NULL);
	}
	p = malloc(sizeof(listint_t));
	if (p == NULL)
	{
		return (NULL);
	}
	p->n = n;
	p->next = *head;
	*head = p;
	return (p);
}
