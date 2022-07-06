#include<stdio.h>
#include"function_pointers.h"

/**
 * print_name - print name
 *@name: name 
 *@f: pointer of a function 
 *@owner: name of the owner
 *@d: pointer for the dog informations
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)	
	{
return;
	}
(*f)(name);
}
