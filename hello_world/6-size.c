#include <stdio.h>
/**
 * main - a proces that show u the size of the file
 * Return: Always (0) sucesses
 */
int main(void)
{
  printf("Size of a char  %2d byte(s) \n", sizeof(char));
  printf("size of an int %2d byte(s) \n", sizeof(int));
  printf("Size of a long int: %d byte(s)\n", sizeof(long int));
  printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
  printf("Size of a float: %d byte(s)\n", sizeof(float));
return (0);
}
