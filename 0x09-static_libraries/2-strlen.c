#include "main.h"

/**
 * _strlen - function that returns the length of a string.
 * @s: input stringeturn.
 * Return: length
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}

