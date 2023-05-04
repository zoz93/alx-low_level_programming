#include "main.h"

/**
 * clear_bit - entry point.
 * @index:pointer value.
 * @n: int value.
 * Return: always 0 (success)
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < 64)
	{
		*n = *n & ~(1 << index);
		return (1);
	}
	return (-1);
}
