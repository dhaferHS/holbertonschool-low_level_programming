#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strlen_recursion - print length
 * @s: string
 *
 * Return: 0
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
	{
return (0);
	}
	return (_strlen_recursion(s + 1) + 1);
}
