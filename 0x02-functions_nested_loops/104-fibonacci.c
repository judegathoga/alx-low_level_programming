#include <stdio.h>

/**
 * main - Finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 *
 * Return: Always returns 0
 */
int main(void)
{
	unsigned long int curr = 1, next = 2;
	int i;

	for (i = 1; i <= 98; i++)
	{
		if (i != 1)
			printf(", ");

		printf("%lu, %lu", curr, next);
		curr = curr + next;
		next = curr + next;
	}

	putchar('\n');

	return (0);
}
