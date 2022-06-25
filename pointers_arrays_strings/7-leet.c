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

	for (i = 0; str[i]; i++)
	{
if (str[i] == a[i])
{
n[i] = str[i];
}
}
return (str);
}
