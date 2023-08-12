#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Prints single base 10 digits using putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	int h;

	for (h = '0'; h <= '9'; h++)
	putchar(h);
	putchar('\n');
	return (0);
}
