#include "dog.h"
/**
 * init_dog - Function that intilializes a var
 * of type struct dog
 * @d: dog name
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: Always 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	};
}
