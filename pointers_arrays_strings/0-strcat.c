#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_strcat -  concatenates two strings
 * @dest: pointer char
 * @src: pointer char
 * Return: dest pointer
 */

char *_strcat(char *dest, char *src)
{
{
while (*dest++)
	;
	*dest++ = *src++;
}
return (dest);
}
