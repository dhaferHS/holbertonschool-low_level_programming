#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts2 - prints character of a string
 *
 *@str: variable of a string
 * Return: Always 0.
 */
void puts2(char *str)
{
while (*str != '\0')
{
	if (*str % 2 == 0)
		_putchar(*str);
	str++;
}
_putchar('\n');
}
