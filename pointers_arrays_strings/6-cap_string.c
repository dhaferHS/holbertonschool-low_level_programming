#include"main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * cap_string - changes all lowercase letters of a string to uppercase
 *@str: string
 *
 *
 * Return: 0
 */
char *cap_string(char *str)

{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
	}
	return (str);
}
