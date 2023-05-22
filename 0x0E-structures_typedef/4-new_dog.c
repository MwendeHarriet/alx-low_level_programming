#include <stdlib.h>
#include "dog.h"

/**
*_strlen - returns length of string
*@s: string to evaluate
*Return: the length of the string
*/

int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
*_strcpy - copies the string pointed to by src
*plus terminating null byte (\0) to buffer pointed
*by dest
*@dest: pointer to buffer to copy the string
*@src: string to be copied
* Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	int length;

	length = 0;

	while (src[length] != '\0')
	{
		length++;
	}

	for (i = 0; i < length; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

/**
*new_dog - creates a new dog
*@name: dog  name
*@age: dog age
*@owner:dog owner
* Return: on success pointer to new dog
* or NULL on failure
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int length1;
	int length2;

	length1 = _strlen(name);
	length2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (length1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (length2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}

