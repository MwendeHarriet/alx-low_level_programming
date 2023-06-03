#include "lists.h"
#include <stdio.h>

void before_main(void) __attribute__ ((constructor));

/**
 * before_main -printss sentence before execution of main
 * Return: nothing
 */
void will_print(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
