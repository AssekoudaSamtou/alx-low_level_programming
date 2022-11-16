/**
 * print_name - prints a name
 * @name: the name to print
 * @f: The callback function
 *
 * Return: Always void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		(*f)(name);
}
