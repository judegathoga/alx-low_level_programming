#include <stdio.h>

/**
 * main - program that finds and prints the sum of the even-valued terms,
 * not greater than 4000000,followed by a new line.
 *
 * Return: Always returns 0
 */
int main(void)
{
	unsigned int curr = 1, next = 2;
	unsigned long sum;

	while (next <= 4000000)
	{
		if (curr % 2 == 0)
			sum += curr;
		if (next % 2 == 0)
			sum += next;

		curr = curr + next;
		next = curr + next;
	}

	printf("%lu\n", sum);
	return (0);
}
