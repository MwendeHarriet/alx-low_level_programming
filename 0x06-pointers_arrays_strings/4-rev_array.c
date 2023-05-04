#include "main.h"
#include <stdio.h>

/**
* reverse_array - reverses the contents of an array
*@a: the  array
*@n: number of elements
*Return: reversed array
*/

void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}

