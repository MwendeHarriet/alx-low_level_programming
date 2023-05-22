#include <stdlib.h>
#include "dog.h"

/**
*init_dog -initialises type struct dog variable
*description -will initialise type struct dog variable
*@d: pointer to struct dog to initialise
*@name: dog name
*@age: dog age
*@owner: dog owner
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)

		d = malloc(sizeof(struct dog));

	d.name = name;
	d.age = age;
	d.owner = owner;
}
