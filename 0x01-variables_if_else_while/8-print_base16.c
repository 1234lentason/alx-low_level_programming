#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;
	char le;

	for (a = '0'; a <= '9'; a++)
		putchar(a);
	for (le = 'b'; le <= 'f'; le++)
		putchar(le);
	putchar('\n');

	return (0);
}
