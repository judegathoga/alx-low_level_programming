#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Assigns a random number to the variable n
 * each time it is executed and checks whether the
 * last digit is greater, less than, or equal to 0
 *
 * Return: 0 if the the program exits successfully
 */
int main(void)
{
	int n;
	int l_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* your code goes there */
	l_digit = n % 10;
	if (l_digit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, l_digit);
	else if (l_digit == 0)
		printf("Last digit of %d is %d and is 0\n", n, l_digit);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0 \n", n, l_digit);
	return (0);
}
