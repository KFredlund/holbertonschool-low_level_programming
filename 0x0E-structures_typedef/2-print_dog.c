#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - Function that prints a stuct dog
 * @d - element of dog
 *
 * Return: Always 0
 */
void print_dog(struct dog *d)
{
	if (d->name == NULL)
		printf("Name: (nil)");
	else if (d->age <= 0)
		printf("Age: (nil)");
	else if (d->owner == NULL)
		printf("Owner: (nil)");
	else if (d == NULL)
		printf("\n");
	else
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
