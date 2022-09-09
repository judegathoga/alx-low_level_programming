#include <stdio.h>


/**
 * main - Prints the alphabet in lowercase, followed by a new line.
 *
 * Return: 0 if the program exits successfully
 */
int main(void)
{
	char alph = 'a';
	int letters = 25;

	while (letters >= 0)
	{
		putchar(alph++);
		letters--;
	}

	putchar('\n');
	return (0);
}
