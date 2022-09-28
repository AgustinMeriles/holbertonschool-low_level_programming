#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Short description, single line
 * @void: Description of parameter x
 * Description: Longer description of the function)?
 * Return: 0
 */
int main(void)
{
char abc, q, e;
e = "e";
q = "q";

for (abc = 'a'; abc <= 'z'; abc++)
{
if (abc != q && abc != e)
putchar(abc);
}
putchar('\n');
return (0);
}
