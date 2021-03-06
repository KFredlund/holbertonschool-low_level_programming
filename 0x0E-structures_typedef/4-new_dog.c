#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - Function that creates a new dog
 * @name: name of new dog
 * @age: age of new dog
 * @owner: name of new owner
 * Return: NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	int len1, len2;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);
	for (len1 = 0; name[len1] != '\0'; len1++)
		;
	new->name = malloc(sizeof(len1));
		new->name = name;
	new->age = age;
	for (len2 = 0; owner[len2]; len2++)
		;
	new->owner = malloc(sizeof(len2));
		new->owner = owner;
	return (new);
}
