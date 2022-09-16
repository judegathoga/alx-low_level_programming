#include "main.h"

/**
 * _isupper - Checks for uppercase character
 * @c: Character to be checked
 *
 * Return: Returns 1 if c is uppercase
 * Returns 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
