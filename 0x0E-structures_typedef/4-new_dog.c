#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
*new_dog -creates new dog
*description: creates a new dog
*@name: dog name
*@age: dog age
*@owner: dog owner
*Return: on success pointer to new_dog
*or on failure, NULL
*/

dog_t *new_dog(char *name, float age, char *owner);
{
	if (name == NULL || owner == NULL)
		return (NULL);

	size_t name_len = 0;

	size_t owner_len = 0;

	char *temp = name;

	while (*temp != '\0')
	{
		name_len++;
		temp++;
	}

	temp = owner;

	while (*temp != '\0')
	{
		owner_len++;
		temp++;
	}

	dog_t *newDog = (dog_t *)malloc(sizeof(dog_t));

	if (newDog == NULL)
		return (NULL);

	newDog->name = (char *)malloc((name_len + 1) * sizeof(char));

	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);
	}

	newDog->owner = (char *)malloc((owner_len + 1) * sizeof(char));

	if (newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}

	char *name_dest = newDog->name;

	char *owner_dest = newDog->owner;

	temp = name;

	while (*temp != '\0')
	{
		*name_dest = *temp;
		name_dest++;
		temp++;
	}

	*name_dest = '\0';

	temp = owner;

	while (*temp != '\0')
	{
		*owner_dest = *temp;
		owner_dest++;
		temp++;
	}

	*owner_dest = '\0';

	newDog->age = age;
	return (newDog);
}
