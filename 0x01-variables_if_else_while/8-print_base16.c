#include <stdio.h>

/**
  * main - prints all the numbers of base 16 in lowercase,
  * followed by a new line.
  *
  * Return: 0 if the program exits successfully
 */
int main(void)
{
	char alph = 48;

	while (alph <= 57)
		putchar(alph++);

	alph = 97;

	while (alph <= 102)
		putchar(alph++);
	putchar('\n');

	return (0);
}
