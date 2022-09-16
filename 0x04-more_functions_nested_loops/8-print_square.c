#include "main.h"

/**
 * print_square - Prints a square, followed by a new line.
 * @size: Dimensions of the square
 *
 */
void print_square(int size)
{
	int w, h;

	for (w = 0; w < size; w++)
	{
		for (h = 0; h < size; h++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}
}
