#include"main.h"
/**
 * string_nconcat - function that concatenates two strings
 * @s1: the first string,
 * @s2: the string that we will copy the fisrt;
 * @n: the comparative size;
 * Return: 0;
 **/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	if (s1 == NULL)
	{
		s1 = "";
	}
	else if (s2 == NULL)
	{
		s2 = "";
	}
	if (n >= s2)
	{

