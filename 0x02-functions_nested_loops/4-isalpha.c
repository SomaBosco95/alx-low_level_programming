#include "main.h"

/**
 * _isalpha - funtion that chacks for alphabets
 *
 * @c: parameter to be checked
 *
 * Return: 1 if it is an alphabet
 * and 0 othersise
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 62 && c <= 90))
		return (1);
	else
		return (0);
}
