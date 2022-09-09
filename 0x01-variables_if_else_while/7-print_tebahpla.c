 #include <stdio.h>

/**
 * main - Prints the alphabet in lowercase in reverse
 * followed by a new line.
 *
 * Return: 0 if the program exits successfully
 */
int main(void)
{
	char alph = 122;

	while (alph >= 97)
		putchar(alph--);

	putchar('\n');
	return (0);
}
