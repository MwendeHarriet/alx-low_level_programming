#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
*print_dog -prints struct dog
*description -prints struct dog
*@d: sreuct dog to print
*Return: on success 0
*/

void print_dog(struct dog *d)
{
	if (d == NULL)
		return (0);

	if ((*d).name == NULL)
		(*d).name == "(nil)";

	if ((*d).owner == NULL)
		(*d).owner == "(nil)";

	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
