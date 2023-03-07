#include "main.h"

/**
 * _memcpy - function to copy memory area
 * @dest: memory stored
 * @src: memory copied
 * @n: number of n bytes
 *
 * Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int b = 0;
	int i = n;

	for (; b < i; b++)
	{
		dest[b] = src[b];
			n--;
	}
	return (dest);
}
