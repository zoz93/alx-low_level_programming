#include "main.h"
/**
 * _memset-fill memory with specific value
 * @s: string adress
 * @b: the desired value
 * @n: number of bytes
 * Return: changed array with new value
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s)
}
