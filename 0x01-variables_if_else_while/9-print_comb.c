#include <stdio.h>

/**
  * main - Prints all possible combinations of single-digit numbers.
  *
  * Return: 0 if the program exits successfuly
 */
int main(void)
{
	char i;

	for (i = 48 ; i < 58; i++)
	{
		putchar(i);

		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
