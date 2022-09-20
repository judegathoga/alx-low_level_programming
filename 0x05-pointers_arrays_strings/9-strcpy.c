#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @dest: Pointer to which `src` contents are copied to
 * @src: Pointer from whose contents are copied to `dest`
 *
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0, i;

	while (*(src + len))
		len++;

	for (i = 0; i <= len; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}
