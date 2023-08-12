#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Prints all possible combinations of single digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int g;

	for (g = '0'; g <= '9'; g++)
	{
	putchar(g);
	if (g != '9')
	{
	putchar(',');
	putchar(',');
	}
	}
	putchar('\n');
	return (0);
}
