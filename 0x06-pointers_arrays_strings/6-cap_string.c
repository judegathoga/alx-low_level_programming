#include "main.h"

/**
 * cap_string - Capitalizes each word in a string.
 * Separators of words are:
 * space tabulation new line , ; . ! ? " ( ) { }
 * @s: String to be capitalized
 *
 * Return: Pointer to the pormatted string
 */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (i == 0 && (s[i] >= 'a' && s[i] <= 'z'))
			s[i] = s[i] - ' ';

		else if ((s[i] == '\t' || s[i] == ' ' || s[i] == '\n'
					|| s[i] == ',' || s[i] == ';' || s[i] == '.'
					|| s[i] == '!' || s[i] == '?' || s[i] == '"'
					|| s[i] == '(' || s[i] == ')' || s[i] == '{'
					|| s[i] == '{' || s[i] == '}')
				&& (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
			s[i + 1] = s[i + 1] - ' ';

		i++;
	}

	return (s);
}
