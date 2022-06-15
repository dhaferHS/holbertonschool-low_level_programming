#include "main.h"

/**
 * print_diagonal - print diagonal
 *
 * @n: number of lignes
 *
 * Return: 0
 */
void print_diagonal(int n)
{
int j, i;
for (int i = 0; i < n; i++)
{
for (int j = 0; j < n; j++)
{
if (j == i)
_putchar(" ");
}
_putchar("\");
_putchar("\n");
}
return (0);
}
