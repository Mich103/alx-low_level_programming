#include "main.h"

/**
 *_strcat - function that concatenates 2 strings
 *@dest: String destination
 *@src: string source
 * Return: returns pointer to destination
 */

char *_strcat(char *dest, char *src)
{

	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
