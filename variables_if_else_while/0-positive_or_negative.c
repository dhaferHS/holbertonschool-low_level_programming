#include <stdio.h>
#include<stdlib.h>
#include <time.h>
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
printf("%d is Positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n");
}
	else
{
printf("%d is Negative\n", n);
};

	return (0);
}
