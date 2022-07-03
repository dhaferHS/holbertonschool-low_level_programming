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
for (i = 0; i < argc; i++)
{
argv[i] == a;
argv[i + 1] == b;
sum = a + b;
printf("%d\n", sum);
}
return (0);
}
else
{
		printf("Error");
	return (1);
}
}
