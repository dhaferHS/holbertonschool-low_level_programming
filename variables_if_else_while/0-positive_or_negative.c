#include <stdio.h>
#include<stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - execute file
 * Return: 0
 */
int main(void)
{
	int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
printf(" %d ", rand());
if (n > 0)
{
printf("%d is Positive", n);
}
else if (n == 0)
{
printf("is zero.");
}
	else
{
printf("%d is Negative", n);
};

	return (0);
}
