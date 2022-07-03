#include<stdio.h>
#include<stdlib.h>
/**
 * main- program that prints the number of arguments passed into it
 *
 * @argc: argc
 * @argv: argv
 * Return: void
 */
int main(int argc, char **argv)
{
	int i, a, b, sum;

if ((argc !='\0') && (argc == 3))
{
argv[1] = a;
argv[2] = b;
sum = a * b;
printf("%d\n", sum);
}
return (0);
}
else
{
		printf("Error");
	return (1);
}
