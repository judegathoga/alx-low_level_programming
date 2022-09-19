#include "main.h"

/**
 * _puts - Prints a string, followed by a new line, to stdout.
 * @str: Character array to be printed to stdout
 *
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		++str;
	}

	_putchar('\n');
}
