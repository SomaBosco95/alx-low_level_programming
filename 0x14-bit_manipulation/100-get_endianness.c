#include "main.h"

/**
 * get_endianness - function checks the endianness
 *
 * Return: 0 | 1
 */

int get_endianness(void)
{
	int y = 2;

	if (y & 1)
		return (0);
	else
		return (1);
}
