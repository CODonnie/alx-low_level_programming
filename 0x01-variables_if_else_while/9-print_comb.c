#include <stdio.h>

/**
 * main - main function
 *
 * Return: always (0)
 *
 */
int main(void)
{
	char d;

	for (d = '0'; d <= '9'; d++)
	{
		putchar(d);
		if (d <= 8)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
