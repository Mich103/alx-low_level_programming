#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - function that frees the dogs
 * @d: Pointer to the structure
 * Return: Nothing
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
