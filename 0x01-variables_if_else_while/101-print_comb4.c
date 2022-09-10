#include <stdio.h>

/**
 * main - Prints all possible different combinations of three digits.
 *
 * Return: 0 if the program exits successfully
 */
int main(void)
{
	int first, second, third;

	for (first = 48; first < 58; first++)
	{
		for (second = 48; second < 58; second++)
		{
			for (third = 48; third < 58; third++)
			{
				if (first < second && second < third)
				{
					if (!(first == 48 && second == 49 && third == 50))
					{
						putchar(',');
						putchar(' ');
					}

					putchar(first);
					putchar(second);
					putchar(third);
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
