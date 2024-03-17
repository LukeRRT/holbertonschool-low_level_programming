#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - print format of dog's information
 * @d: dog
 *
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);

		printf("Age: %f\n", d->age);

		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
	else
		printf("\n");
}
