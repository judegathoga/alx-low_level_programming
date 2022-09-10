#include <stdio.h>

/**
 * main - Prints all possible combinations of two two-digit numbers.
 *
 * Return: 0 if the program exits successfully
 */
int main(void)
{
	int first, second, third, fourth, set_1, set_2;

	for (first = 48; first < 58; first++)
	{
		for (second = 48; second < 58; second++)
		{
			for (third = 48; third < 58; third++)
			{
				for (fourth = 48; fourth < 58; fourth++)
				{
					set_1 = 10 * (first + '0') + (second + '0');
					set_2 = 10 * (third + '0') + (fourth + '0');

					if (set_1 < set_2)
					{
						if (!(first == 48 && second == 48 && third == 48 && fourth == 49))
						{
							putchar(',');
							putchar(' ');
						}
						putchar(first);
						putchar(second);
						putchar(' ');
						putchar(third);
						putchar(fourth);
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
