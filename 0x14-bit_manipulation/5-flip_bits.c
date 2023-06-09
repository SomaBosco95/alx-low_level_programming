#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 * @n: contains the bits to be flipped
 * @m: we are flipping to get here
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int y;
	unsigned long int b = 0;

	y = n ^ m;

	for (b = 0; y != 0; b += 1)
		y &= (y - 1);
	return (b);
}
