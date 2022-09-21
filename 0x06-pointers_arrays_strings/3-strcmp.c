#include "main.h"

/**
 * _strcmp - Compares two strings s1 and s2
 * using unsigned characters
 * @s1: First string
 * @s2: Second string
 *
 * Return: integer indicating the result
 * of the comparison, as follows:
 * 0, if the s1 and s2 are equal;
 * a negative value if s1 is less than s2;
 * a positive value if s1 is greater than s2.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	if (s1 == s2)
		return (0);

	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;

	return (s1[i] - s2[i]);
}
