#include<stdio.h>
#include"dog.h"

/**
 * init_dog - tell the name and the age
 *@name: name of the dog
 *@age: age of the dog
 *@owner: name of the owner
 *@d: pointer for the dog informations
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
{

		if (d->name != NULL)
{
			printf("Name: %s\n", d->name);
}
		else
{
			printf("Name: (nil)");
}

		if (d->age > 0)
{
			printf("Age: %f\n", d->age);
}
		else
{
			printf("age: (nil)");
}

		if (d->owner != NULL)
{
			printf("Owner: %s\n", d->owner);
}
		else
{
			printf("owner: (nil)");
}
}
	else
{
		return;
}
}