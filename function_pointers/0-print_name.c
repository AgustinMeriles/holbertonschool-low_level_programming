#include "function_pointers.h"
/**
 * print_name - function that will prints a name
 * @name: the name that will function prints;
 * @f: paramether;
 * Return: 0;
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	if (f == NULL)
		return;
	(*f)(name);
}
