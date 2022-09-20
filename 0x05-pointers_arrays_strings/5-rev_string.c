#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: String to be reversed.
 *
 */
void rev_string(char *s)
{
	int len = 0, i, swaps;
	char temp;

	while (*(s + len))
		len++;

	swaps = len % 2 == 0 ? len / 2 : (len / 2) + 1;

	for (i = 0; i < swaps; i++)
	{
		len--;
		temp = *(s + i);
		*(s + i) = *(s + len);
		*(s + len) = temp;
	}
}
