#include "main.h"

/**
 * set_bit - entry point.
 * @index:pointer value.
 * @n: int value.
 * Return: always 0 (success)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index < 64)
	{
		*n += 1 << index;
		return (1);
	}
	return (-1);
}
