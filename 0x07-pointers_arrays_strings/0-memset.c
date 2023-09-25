#include "main.h"

/**
 * _memset - Function that fills memory with a constant byte.
 *
 * @s: Pointer to b
 * @b: Constant byte
 * @n: Number of bytes
 * Return: constant byte.
 **/

char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	while (n > 0)
	{
		s[a] = b;
		n--;
		a++;
	}
	return (s);
}
