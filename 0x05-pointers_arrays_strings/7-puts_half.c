#include "main.h"

/**
 * puts_half - Prints the second half of the string
 * If the number of characters is odd,
 * the function prints the last n characters of the string,
 * where n = (length_of_the_string - 1) / 2
 * @str: String to be printed out.
 *
 */
void puts_half(char *str)
{
	int len = 0, half, i;

	while (*(str + len))
		len++;

	half = len % 2 == 0 ? len / 2 : (len - 1) / 2;

	for (i = half; i < len; i++)
	{
		_putchar(*(str + i));
	}

	_putchar('\n');
}
