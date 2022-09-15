#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59.
 *
 */
void jack_bauer(void)
{
	int h, m, h1, h2, m1, m2;

	for (h = 0; h <= 23; h++)
	{
		h2 = h % 10;
		h1 = (h - h2) / 10;

		for (m = 0; m <= 59; m++)
		{
			m2 = m % 10;
			m1 = (m - m2) / 10;

			_putchar(h1 + '0');
			_putchar(h2 + '0');
			_putchar(':');
			_putchar(m1 + '0');
			_putchar(m2 + '0');

			_putchar('\n');
		}
	}
}
