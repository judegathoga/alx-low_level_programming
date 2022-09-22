#include "main.h"

/**
 * _strncpy - Works exactly like strncpy
 * @dest: String `src` is copied to
 * @src: String copied to `dest`
 * @n: Number of bytes to copy from `src` to `dest`
 *
 * Return: Pointer to `dest`
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; *(src + i) && n > i; i++)
		*(dest + i) = *(src + i);
	for (; n > i; i++)
		*(dest + i) = '\0';

	return (dest);
}
