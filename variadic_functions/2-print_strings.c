#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 *
 * Description: Prints each string followed by the separator,
 * except for the last string. If @separator is NULL, it isn't printed.
 * If a string is NULL, prints (nil) instead.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
	str = va_arg(args, char *);

	if (str == NULL)
	printf("(nil)");
	else
	printf("%s", str);

	if (separator != NULL && i < n - 1)
	{
	printf("%s", separator);
	}
	}
va_end(args);

printf("\n");
}
