#include <stdio.h>

/**
*main -prints name of file it was
*	compiled from
*Return: on success 0
*/

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
