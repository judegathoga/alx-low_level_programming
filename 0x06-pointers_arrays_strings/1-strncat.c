#include "main.h"

/**
 * _strncat - Similar to the _strcat function, except that
 * it uses at most `n` bytes from `src`
 * and `src` does not need to be null-terminated
 * if it contains `n` or more bytes
 * @dest: String `src` is appended to
 * @src: String appended to `dest`
 * @n: Number of bytes to append from `src` to `dest`
 *
 * Return: Pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, len = 0;

	while (dest[len])
		len++;

	for (i = 0; *(src + i) && n > 0; i++, len++, n--)
	{
		*(dest + len) = *(src + i);
	}

	return (dest);
}
