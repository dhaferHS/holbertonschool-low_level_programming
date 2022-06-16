#include "main.h"
#include <stdio.h>
/**
 * print_square - print more squares
 *
 * @size : size squares
 * Return: 0
 */
void print_triangle(int size)
{
int i, j;
for(i=1; i<=size; i++)
{
for(j=i; j<size; j++)
{_putchar(' ');
}
for(j=1; j<=i; j++)
{
_putchar('#');
}
printf('\n');
}
return (0);
}
