#include <stdio.h>
#include "lists.h"

void _constructor(void) __attribute__((constructor));

/**
 * first - it outputs/prints a sentence before the main()
 *
 * the function is then executed
 * Return: void
 */
void _constructor(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
