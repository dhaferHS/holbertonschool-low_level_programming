#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - tell the name and the age
 *@name: name of the dog
 *@age: age of the dog
 *@owner: name of the owner
 *
 */
struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif