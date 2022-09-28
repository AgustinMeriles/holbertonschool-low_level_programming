#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *  * main - Entry point
 *    * Return: Always 0 (Success)
**/
int main(void)
{
	int pos;

	for (pos = '0'; pos <= '9'; pos++)
	{
		putchar(pos);
		if (pos != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar ('\n');
	return (0);
}

