#include "main.h"
/**
 * main - Function that prints its name
 * @argc: the size of the array;
 * @argv: the content of the position;
 * Return: 0;
 **/
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
