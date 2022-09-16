#include "main.h"

/**
 * more_numbers - Prints 10 times the numbers, from 0 to 14,
 * followed by a new line.
 *
 */
void more_numbers(void)
{
	int i, n, first, second;

	for (i = 0; i <= 9; i++)
	{
		for (n = 0; n <= 14; n++)
		{
			second = n % 10;
			first = (n - second) / 10;

			if (n > 9)
				_putchar(first + '0');
			_putchar(second + '0');
		}

		_putchar('\n');
	}
}
