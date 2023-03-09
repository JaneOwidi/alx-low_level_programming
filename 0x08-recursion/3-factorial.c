#include "main.h"

/**
 * factorial - function that returns factorial of a number
 * @n: function parameter
 * Return: always 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
