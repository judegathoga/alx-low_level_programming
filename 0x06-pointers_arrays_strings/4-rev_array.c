#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: An array of integers
 * @n: Number of elements to reverse
 *
 */
void reverse_array(int *a, int n)
{
	int temp, swaps, i;

	swaps = n % 2 == 0 ? n / 2 : (n / 2) + 1;

	for (i = 0; i < swaps; i++)
	{
		n--;
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
