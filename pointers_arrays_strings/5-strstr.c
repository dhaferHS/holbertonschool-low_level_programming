#include <stdio.h>
#include<string.h>
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @haystack: string one
 * @needle: string two
 *
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
int i, j, k, count = 0;

for (i = 0; needle[i] != '\0'; i++)
{
}
for (j = 0 ; haystack[j]!='\0'; j++)
{
if (haystack[j] == needle[0])
{
for (k = 0 ; k < i;k++)
{
if (haystack[j]==needle[k]){
j++;
count++;
}
}
}
}
return (haystack + (i + 1));
}
