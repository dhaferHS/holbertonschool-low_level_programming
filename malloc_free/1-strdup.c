#include "main.h"

/**
 * _strdup - function that returns a pointer to newly
 *
 * @str: char
 *
 * Return: 0
 */
char *_strdup(char *str)
{
int size, i;
	char *a, *b;
size = strlen(str);

	if (str == NULL)
		return (NULL);
	a = malloc(sizeof(char) * (size + 1));
	if (a == NULL)
		return (NULL);

	while (i < size)
	{
	b[i] = str[i];
		i++;
	}
	return (a);

}
