#include "main.h"

/**
 * puts2 - Prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: String to be printed alternately
 *
 */
void puts2(char *str)
{
	int i;

	for (i = 0 ; *str; i++) /* same as (...;*s != '\0';...) */
	{
		if (i % 2 == 0)
			_putchar(*str);

		str++;
	}

	_putchar('\n');
}
