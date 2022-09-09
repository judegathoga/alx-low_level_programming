#include <stdio.h>
/**
 * main - Prints all single digit numbers of base 10 starting from 0
 * to 9
 * Return: 0 if te program exits successfully
 */
int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i++);
	}
	putchar('\n');
	return (0);
}
