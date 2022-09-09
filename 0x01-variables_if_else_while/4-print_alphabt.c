#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, apart from q and e
 * followed by a new line.
 *
 * Return: 0 if the program exits successfully
 */
int main(void)
{
	char alph = 97;

	while (alph <= 122)
	{
		if (alph != 101 && alph != 113)
			putchar(alph);
		alph++;
	}
	putchar('\n');
	return (0);
}
