#include <stdio.h>

/**
  * main - Prints all possible different combinations of two digits.
  *
  * Return: 0 if the program exits successfully
 */
int main(void)
{
	int first, second;

	for (first = 48; first < 58; first++)
	{
		for (second = 48; second < 58; second++)
		{
			if (first < second)
			{
				if (!(first == 48 && second == 49))
				{
					putchar(',');
					putchar(' ');
				}

				putchar(first);
				putchar(second);
			}
		}
	}

	putchar('\n');
	return (0);
}
