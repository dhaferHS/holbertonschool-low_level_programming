#include <stdio.h>
/**
 * main - a proces that show u the size of the file
 *
 * Return: Always (0) sucesses
 */
int main(void)
{
printf("Size of a char: %c byte(s)\n", sizeof(char));
printf("size of an int: %u byte(s)\n", sizeof(int));
printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
printf("Size of a long long int: %llu byte(s)\n", sizeof(long long int));
printf("Size of a float: %f byte(s)\n", sizeof(float));
return (0);
}
