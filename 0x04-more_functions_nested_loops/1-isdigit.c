#include "main.h"

/**
 * _isdigit - function that checks for digits between 0 and 9
 * @c: function parameter
 * Return: 1 if c is a digit
 * 0 otherwise
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}
