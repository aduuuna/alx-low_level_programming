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
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(f));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(j));
return (0);
}




