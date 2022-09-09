 #include <stdio.h>
/**
 * main - Prints the alphabet in lowercase, then uppercase
 * followed by a new line.
 *
 * Return: 0 if the program exits successfully
 */
int main(void)
{
	char alph = 97;

	while (alph <= 122)
		putchar(alph++);

	alph = 65;

	while (alph <= 90)
		putchar(alph++);
	putchar('\n');
	return (0);
}
