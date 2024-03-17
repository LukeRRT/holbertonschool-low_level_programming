#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_len - string counter
 * @str: string
 *
 * Return: length
 *
 */

int str_len(char *str)
{
	int length = 0;

	while (*str != '\0')
	{
		length++;
		str++;
	}
	return (length);
}

/**
 * *new_dog - new dog information
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: new dog's information
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int namelen;
	int ownerlen;
	dog_t *newdog;
	int i;

	if (name == NULL || owner == NULL)
		return (NULL);

	namelen = str_len(name);
	ownerlen = str_len(owner);

	newdog = malloc(sizeof(dog_t));

	if (newdog == NULL)
		return (NULL);

	newdog->name = malloc(namelen + 1);
	newdog->owner = malloc(ownerlen + 1);

	if (newdog->name == NULL || newdog->owner == NULL)
	{
		free(newdog->name);
		free(newdog->owner);
		free(newdog);
		return (NULL);
	}

	for (i = 0; i <= namelen; i++)
		newdog->name[i] = name[i];
	for (i = 0; i <= ownerlen; i++)
		newdog->owner[i] = owner[i];

	newdog->age = age;

	return (newdog);
}
