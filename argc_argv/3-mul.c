#include "main.h"
/**
 * main - function;
 * @argc: paramether;
 * @argv: paramether;
 * Return: 0;
 **/
int main(int argc, char *argv[])
{
	int res = 0;

	if (argc == 2)
	{
	res = argv[1] * argv[2];
	return (0);
	}
	else
	{
		printf("Error");
		return (-1);
	}
}
