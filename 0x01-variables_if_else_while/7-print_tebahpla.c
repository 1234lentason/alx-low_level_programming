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
	char lent;

	for (lent = 'z'; lent >= 'a'; lent--)
		putchar(lent);
		putchar('\n');

	return (0);
}
