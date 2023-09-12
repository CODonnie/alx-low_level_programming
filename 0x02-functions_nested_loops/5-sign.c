#include "main.h"
/**
 * print_sign - main function
 * @n: character to be checked
 * Return: 1 if n is greater than zero, 0 if its zero, -1 if its less than zero.
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
