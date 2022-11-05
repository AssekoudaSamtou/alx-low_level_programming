#include <stdio.h>
#define UNUSED(x) (void)(x)

/**
 * main - prints its name, followed by a new line
 * @argc: int
 * @argv: pointer to char[]
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	UNUSED(argc);
	printf("%s\n", argv[0]);
	return (0);
}
