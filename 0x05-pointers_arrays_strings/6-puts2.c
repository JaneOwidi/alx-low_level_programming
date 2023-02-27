#include "main.h"

/**
 * puts2 - function that prints every character of a string
 * @str: function parameter
 * Retur: print
 */
void puts2(char *str)
{
	int longi = 0;
	int t = 0;
	char *d = str;
	int o;

	while (*d != '\0')
	{
		d++;
		longi++;
	}
	t = longi - 1;
	for (o = 0; o <= t; o++)
	{
		if (o % 2 == 0)
		{
			_putchar(str[o]);
		}
	}
	_putchar('\n');
}
