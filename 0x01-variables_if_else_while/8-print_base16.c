#include <stdio.h>

/**
 * main - the main function
 *
 * Return: always (0)
 */

int main(void)
{
	int i;
	char d;

	for (i = 0; i <= 10; i++)
		putchar(i + '0');
	for (d = 'a'; d <= 'f'; d++)
		putchar(d);
	putchar('\n');
	return (0);
}
