#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: The string whose length is to be checked
 *
 * Return: Returns the length of a string.
 */
int _strlen(char *s)
{
	int length = 0;
	char *i = s;

	while (*i != '\0')
	{
		length++;
		i++;
	}

	return (length);
}
