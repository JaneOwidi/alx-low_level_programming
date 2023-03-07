#include "main.h"

/**
 * _strpbrk - function that searches a string for any set of bytes
 * @s: function parameter
 * @accept: function parameter
 *
 * Return: always 0
 */
char *_strpbrk(char *s, char *accept)
{
	int b;

	while (*s)
	{
		for (b = 0; accept[b]; b++)
		{
			if (*s == accept[b])
				return (s);
		}
		s++;
	}
	return ('\0');
}
