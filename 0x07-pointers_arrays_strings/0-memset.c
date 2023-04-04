#include "main.h"
/**
 * _memset-fill memory with specific value
 * @s: string adress
 * @b: the desired value
 * @n: nuber of bytes
 * Return: changed array with new value
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}
	return (s)
}
