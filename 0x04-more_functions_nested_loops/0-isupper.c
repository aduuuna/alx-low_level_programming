#include "main.h"
/**
 * _isupper - Checks for uppercase letters
 * @x: The character to be checked
 * Return: 1 for uppert letter or 0 for any other
 */
int _isupper(int x)
{
if (x >= 65 && x <= 90)
{
return (1);
}
return (0);
}
