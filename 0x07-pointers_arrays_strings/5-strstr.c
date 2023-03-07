#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: function parameter
 * @needle: function parameter
 *
 * Return: always 0
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *I = haystack;
		char *p = needle;

		while (*I == *p && *p != '\0')
		{
			I++;
			p++;
		}
		if (*p == '\0')
			return (haystack);
	}
	return (0);
}

