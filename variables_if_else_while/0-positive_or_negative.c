#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * function_name - Short description, single line
 * @void: Description of parameter x
 * Description: Longer description of the function)?
 * Return: 0
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
printf ("%d is positive\n", n);
else if (n < 0)
printf ("%d is negative\n", n);
else
printf ("%d is zero\n", n);
return (0);
}
