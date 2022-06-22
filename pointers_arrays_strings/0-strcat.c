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
int i = 0;
int l = 0;
l = strlen(dest);
while (src[i] != '\0')
{
	dest[l] = src[i];
	l++;
	i++;
}
dest[l] = '\0';
return (dest);
_putchar('\n');
}
