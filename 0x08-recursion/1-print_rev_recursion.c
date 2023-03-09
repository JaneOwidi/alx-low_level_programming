#include "main.h"
#include <stdio.h>
/**
 * _print_rev_recursion - function that prints reverse of string
 * @s: function parameter
 * Return: always 0
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
