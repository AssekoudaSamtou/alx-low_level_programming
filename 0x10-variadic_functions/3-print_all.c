#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything, followed by a new line.
 * @format: char
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i = 0;
	char *s;
	char c;
	int integer;
	float f;

	va_start(ap, format);

	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'i':
				integer = va_arg(ap, int);
				printf("%d%s", integer, format[i + 1] == '\0' ? "" : ", ");
				break;
			case 'c':
				c = va_arg(ap, int);
				printf("%c%s", c, format[i + 1] == '\0' ? "" : ", ");
				break;
			case 'f':
				f = va_arg(ap, double);
				printf("%f%s", f, format[i + 1] == '\0' ? "" : ", ");
				break;
			case 's':
				s = va_arg(ap, char*);
				printf("%s%s", s ? s : "(nil)", format[i + 1] == '\0' ? "" : ", ");
				break;
		}
		i += 1;
	}
	printf("\n");
}
