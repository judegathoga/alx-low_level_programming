#include <stdio.h>
#include <unistd.h>

/**
* main - Function the prints a single line to stderr and returns 1
* Return: 1 if the program exits succesfully
*/
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
