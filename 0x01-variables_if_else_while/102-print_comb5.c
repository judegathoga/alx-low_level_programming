#include <stdio.h>

/**
 * main - Prints all possible combinations of two two-digit numbers.
 *
 * Return: 0 if the program exits successfully.
 */
int main(void)
{
	int first, second;

	for (first = 0; first = 98; first++)
	{
		for (second = first + 1; second <= 99; second++)
		{
			putchar((first / 10) + '0');
			putchar((num1 % 10) + '0');
			putchar(' ');
			putchar((second / 10) + '0');
			putchar((second % 10) + '0');

			if (first == 98 && second == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}