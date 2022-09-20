#include "main.h"

/**
 * print_rev - Prints a string, in reverse, followed by a new line.
 * @s: Character array to be printed in reverse
 *
 */
void print_rev(char *s)
{
	int size = 0;

	while (*s != '\0')
	{
		size++;
		s++;
	}

	s--;

	while (size > 0)
	{
		_putchar(*s);
		s--;
		size--;
	}

	_putchar('\n');
}
