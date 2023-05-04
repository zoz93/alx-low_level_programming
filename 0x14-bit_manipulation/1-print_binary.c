#include "main.h"

/**
 * print_binary - entry point.
 * bin_print - prints the binary in reverse
 * @n:pointer value.
 * Return: always 0 (success)
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	bin_print(n);
}
/**
 * @n: base 10 number
 */
void bin_print(unsigned long int n)
{
	if (n == 0)
	{
		return;
	}
	else
	{
		bin_print(n >> 1);
	}
	_putchar((n & 1) + '0');
}
