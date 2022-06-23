#include "main.h"
#include<stdio.h>
#include<string.h>
/**
 * _strncat - concatenates two strings
 *
 *@dest: sting one
 *@src: string two
 *@n: bytes
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;

while (dest[i] != '\0')
dest++;
while (++i <= n)
*dest++ = *src++;
*(++dest) = '\0';
return (dest);
}
