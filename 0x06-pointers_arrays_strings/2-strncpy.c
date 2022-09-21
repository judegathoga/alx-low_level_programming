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
	int i = 0;

	for (i = 0; *(src + i) && n > i; i++)
		*(dest + i) = *(src + i);

	return (dest);
}
