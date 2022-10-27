#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - function that prints a struct dog
 * @d: the paramether;
 * return: 0;
 **/
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: (nil)");
	else
		printf("Name: %s\n", d->name);
	if (d->age < 0)
		printf("Age: (nil)");
	else
		printf("Age: %d\n", d->age);
	if (d->owner == NULL)
		printf("Owner: (nil)");
	else
		printf("Owner: %s\n", d->owner);
}
