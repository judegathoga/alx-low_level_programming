#include "main.h"

/**
 * print_triangle - Prints a triangle, followed by a new line.
 * @size: Height of the triangle
 *
 */
void print_triangle(int size)
{
	int h, s, c;

	for (h = 0; h < size && size > 0; h++)
	{
		for (s = (size - 1); s > h; s--)
			_putchar(' ');
		for (c = 0; c <= h; c++)
			_putchar('#');

		_putchar('\n');
	}

	if (size <= 0)
		_putchar('\n');
}
