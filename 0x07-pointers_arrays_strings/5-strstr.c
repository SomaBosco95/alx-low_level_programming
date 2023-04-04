#include "main.h"
#include <stdio.h>

/**
 * *_strstr - function that locates a substring
 * @haystack: string that will be searched
 *  @needle: substring to be searched for
 *
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *one = haystack;
		char *two = needle;

		if (*one == *two && *two != '\0')
		{
			one++;
			two++;
		}
		while (*two == '\0')
		{
			return (haystack);
		}
	}
	return (NULL);
}
