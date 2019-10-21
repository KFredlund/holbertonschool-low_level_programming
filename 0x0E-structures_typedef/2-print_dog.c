#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - Function that prints a stuct dog
 * @d: element of dog
 *
 * Return: Always 0
 */
void print_dog(struct dog *d)
{
	if (!d)
		printf("\n");
	else
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);
		if (d->age <= 0)
			printf("Age: (nil)\n");
		else
			printf("Age: %f\n", d->age);
		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
