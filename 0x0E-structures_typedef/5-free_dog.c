#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - Function that frees dogs
 * @d: dog_t var
 * Return: Always 0
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d);
		free(d->name);
		free(d->owner);
	}
}
