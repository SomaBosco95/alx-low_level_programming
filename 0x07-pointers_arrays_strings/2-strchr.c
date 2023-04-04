#include "main.h"

/**
 * *_strchr - funtion that locate a character in string
 * @s: string to be searched
 * @c: character to search
 *
 * Return: 0
 */

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] != '\0'; index++)
	{
		while (s[index] == c)
		{
			return (s + index);
		}
	}
	while (s[index] == c)
	{
		return (s + index);
	}
	return (0);
}
