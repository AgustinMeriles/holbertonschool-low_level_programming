#include "main.h"
/**
 *  * _isalpha - Check Holberton
 *   * @c: An input character
 *    * Description: function uses _putchar function to print
 *     * alphabet in lowercase 10 times
 *      * Return: 1 if is lowercase or 0 if is uppercase
**/
int _isalpha(int c)
{
char a, p;
int num = 0;
for (a = 'a'; a <= 'z'; a++)
{
for (p = 'A'; p <= 'z'; p++)
{
if (a == c || p == c)
num = 1;
}
}
return (num);
}
