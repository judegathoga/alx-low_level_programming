#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal.
 * @n: Number of times to print diagonal
 *
 */
void print_diagonal(int n)
{
	int i, s;

	for (i = 0; i < n && n > 0; i++)
	{
		for (s = i; s < 0; s--)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
