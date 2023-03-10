#include "main.h"

/**
 * _abs - function gets absolute value of an integer
 *
 * @a: function parameter
 *
 * Return: absolute value of a
 */
int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;
	return (a);
}
