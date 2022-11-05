#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define UNUSED(x) (void)(x)

int isnumber(char *s);

/**
 * main - adds positive numbers
 * @argc: int
 * @argv: pointer to char[]
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (isnumber(argv[i]))
			sum += atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", sum);
	return (0);
}

/**
 * isnumber - something
 * @s: char *
 * Return: int
 */
int isnumber(char *s)
{
	int len, i;

	len = strlen(s);
	for (i = 0; i < len; i++)
	{
		if (!isdigit(s[i]))
			return (0);
	}
	return (1);
}
