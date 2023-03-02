#include "main.h"
/**
 * reverse_array - reverse array of integer
 * ptint_array - presents values of an array
 * @a: function parameter
 * @n number of elements in the array
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
