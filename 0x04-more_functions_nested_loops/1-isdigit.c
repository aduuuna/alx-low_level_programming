#include "main.h"
/**
 * _isdigit - Check if the character is a digit
 * @x: The number to be checked
 * Return: 1 for a character that is a digit and 0 for other
 */
int _isdigit(int x)
{
if (x >= 48 && x <= 57)
{
return (1);
}
return (0);
}
