#include "main.h"
/**
 * _islower - function to print lower case
 * @i: parameter to be printed
 * Return: 1 if lower case
 * and 0 otherwise
 */
int _islower(int i)
{
	if (i >= 97 && i <= 122)
		return (1);
	else
		return (0);
}
