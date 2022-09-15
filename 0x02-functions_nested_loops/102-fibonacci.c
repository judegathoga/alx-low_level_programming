#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 *
 * Return: Always returns 0
 */
int main(void)
{
	long i, curr = 1, next = 2;

	for (i = 1; i <= 25; i++)
	{
		printf("%lu, %lu", curr, next);
		curr = curr + next;
		next = curr + next;

		if (i != 25)
			printf(", ");
	}

	putchar('\n');
	return (0);
}
