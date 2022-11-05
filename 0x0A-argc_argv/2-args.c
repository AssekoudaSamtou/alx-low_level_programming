#include <stdio.h>
#define UNUSED(x) (void)(x)

/**
 * main - prints all arguments it receives
 * @argc: int
 * @argv: pointer to char[]
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);

	return (0);
}
