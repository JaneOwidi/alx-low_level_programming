#include "main.h"
#include <stdio.h>

/**
 * _putchar - -writes the character c to stdout
 * @c: function parameter
 *
 * Return: 1 on success and -1 on error and error is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
