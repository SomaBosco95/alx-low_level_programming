#include "main.h"

/**
 * _strlen_recursion - function that returns length of string
 * @s: the string
 *
 * Return: string length
 */

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length = _strlen_recursion(s + 1);
		return (length = length + 1);
	}
	return (0);
}
