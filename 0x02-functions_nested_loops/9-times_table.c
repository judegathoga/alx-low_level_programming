#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int r, c, n1, n2, prod;

	for (r = 0; r <= 9; r++)
	{
		for (c = 0; c <= 9; c++)
		{
			prod = r * c;
			n2 = prod % 10;
			n1 = (prod - n2) / 10;

			if (c != 0)
			{
				_putchar(',');
				_putchar(' ');
			}

			if ((n1 + '0') != '0')
				_putchar(n1 + '0');
			else if (c != 0)
				_putchar(' ');

			_putchar(n2 + '0');
		}

		_putchar('\n');
	}
}
