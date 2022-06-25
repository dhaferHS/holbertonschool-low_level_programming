#include "main.h"
#include <stdio.h>
/**
 * leet - encode a string into 1337
 *
 * @str: char point
 * Return: char
 */
char *leet(char *str)
{
	int i;
	int a[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int n[] = {'4', '3', '0', '7', '1'};

	for (i = 0; str[i] != '\0'; i++)
	{
	while (str[i] == a[i])
		str[i] = n[i / 2];
	}
	return (str);
}

