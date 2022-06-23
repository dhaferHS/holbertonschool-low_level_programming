#include"main.h"
#include<stdio.h>
/**
 * _strncpy - copies a string
 *
 *
 *
 *@dest: string one
 *@src: string two
 *
 *@n: bytes
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
		char *i;

i = dest;
if (dest == NULL)
	return (NULL);
while (*src && n--)
{
*dest = *src;
dest++;
src++;
}
return (i);
}
