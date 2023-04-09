#include <stdio.h>

/**
 * main - funtions that prints number of line arguemnt
 * Description: prints number of command line arguements
 * @argc: number of arguements
 * @argv: array of arguemnts
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
