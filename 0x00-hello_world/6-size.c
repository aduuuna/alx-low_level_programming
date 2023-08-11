#include <stdio.h>
/**
 * main - A program that prints the size of various variable types
 * Return: 0 (Success)
 */
int main(void)
{
	char a;
	int  f;
	long int c;
	long long int d;
	float j;
prinf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
prinf("Size of a int: %lu byte(s)\n", (unsigned long)sizeof(f));
prinf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));
prinf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
prinf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(j));
return (0);
}




