#include <stdio.h>

/**
 * main - Computes and prints the sum of all the multiples of 3 or 5
 * below 1024 (excluded), followed by a new line.
 *
 * Return: 0 if the program exits successfully
 */
int main(void)
{
	int i;
	unsigned int sum = 0;

	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}

	printf("%u\n", sum);

	return (0);
}
