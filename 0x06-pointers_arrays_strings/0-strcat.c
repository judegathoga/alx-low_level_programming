#include "main.h"

/**
 *_strcat - Appends the `src` string to the `dest` string,
 * overwriting the terminating null byte (\0)
 * at the end of dest, and then adds a terminating null byte
 * @dest: String that `src` is appended to
 * @src: String that is appended to `dest`
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	int i, len = 0;

	while (dest[len])
		len++;

	for (i = 0; *(src + i); i++, len++)
	{
		*(dest + len) = *(src + i);
	}

	return (dest);
}
