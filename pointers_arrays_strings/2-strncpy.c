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
int i;
for (i = 0; i < n; i++)
{
*dest[i]= *src[i];
i++;
dest++;
src++;
*dest = '\0';
}
return (dest);
}
