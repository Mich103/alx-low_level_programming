#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of the block to be allocated
 * Return: block
 */
void *malloc_checked(unsigned int b)
{
	void *block;

	block = malloc(b);
	if (block == NULL)
		exit(98);
	return (block);
}
