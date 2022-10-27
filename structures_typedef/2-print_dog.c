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
	if (d->age == NULL)
		printf("Age: (nil)");
	if (d->owner == NULL)
		printf("Owner: (nil)");
}
