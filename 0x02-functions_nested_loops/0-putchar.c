#include "main.h"

/**
 * main - Prints _putchar, followed by a new line utilizing
 * the _putchar() function from the _putchar.c file
 *
 * Return: 0 if program exits successfully
 */
int main(void)
{
	char word[] = "_putchar";
	int c;

	for (c = 0; word[c] != 0; c++)
	{
		_putchar(word[c]);
	}
	_putchar('\n');

	return (0);
}
