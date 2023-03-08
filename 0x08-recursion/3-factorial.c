#include "main.h"

/**
* factorial - function that searchs for the factorial of a number
* @n: the number to use
*
* Return: the factorial of the number
*/

int factorial(int n)
{
	int next;

	if (n == 0)
		return (1);
	else if (n < 0)
	return (-1);

	next = factorial(n - 1);
	return (n * next);
}
