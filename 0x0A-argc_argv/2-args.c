#include <stdio.h>

/**
 * main - function prints all command
 * Description: prints all command line arguements
 * @argc: the count of arguements
 * @argv: the array of arguements
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
