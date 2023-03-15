#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new string
 * @str: function parameter
 * Return: NULL if str = NULL
 */
char *_strdup(char *str)
{
	char *bb;
	int i, r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	bb = malloc(sizeof(char) * (i + 1));

	if (bb == NULL)
		return (NULL);
	for (r = 0; str[r]; r++)
		bb[r] = str[r];
	return (bb);
}
