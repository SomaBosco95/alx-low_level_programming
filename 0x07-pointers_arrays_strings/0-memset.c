#include "main.h"

/**
 * *_memset - a funtion that fill memory with constant byte
 * @s: starting address of memory to filled
 * @b: constant byte that will be used to fill memory
 * @n: number of bytes to be filled with constant b
 *
 * Return: pointer s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
