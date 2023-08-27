#include <stdio.h>

void print_message(void)__attribute__((constructor));

/**
 * print_message - prints out the mentioned message
 */

void print_message(void)
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}
