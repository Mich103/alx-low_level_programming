#include "main.h"
/**
*_memcpy - function that copies memory area
*@dest:destination
*@src:source
*@n:number of bytes to copy
*Return: pointer to n
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
