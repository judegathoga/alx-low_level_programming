#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: Number whose last digit is returned
 *
 * Return: The value of the last digit
 */
int print_last_digit(int n)
{
	unsigned int l;

	if (n < 0)
		l = -n;
	else
		l = n;

	l = l % 10;
	_putchar(l + '0');
	return (l);
}
