#include "main.h"
/**
 *  * _isdigit - Check Holberton
 *   * @c: An input character
 *    * Description: function that check if c is digit
 *     * Return: 1 if "c" is digit or 0 if is otherwise
 *      **/
int _isdigit(int c)
{
if ((c >= '0') && (c <= '9'))
return (1);
else
return (0);
}
