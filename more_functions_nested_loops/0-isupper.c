#include "main.h"
/**
 * _isupper - Check Holberton
 * @c: An input character
 * Description: function that check if c is uppercase
 * Return: 1 if "c" is uppercase or 0 if is otherwise
 **/

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
