#include "main.h"

/**
 * _strdup - function that returns a pointer to newly
 *
 * @str: char
 *
 * Return: Nothing
 */
char *_strdup(char *str)
{

	char *a, *b;
	int size = strlen(str);

	if (str == NULL)
		return (NULL);
	a = malloc(sizeof(char) * (size + 1));
	if (a == NULL)
		return (NULL);

	b = a;

	while (*str)
		*b++ = *str++;

	return (a);

}
