#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - function that Prints all the elements of listint_t.
 * @h: pointer to the list head
 * Return: number
 */
size_t print_listint(const listint_t *h)
{
size_t number;
number = 0;
while (h != NULL)
{
printf("%i\n", h->n);
number++;
h = h->next;
}
return (number);
}
