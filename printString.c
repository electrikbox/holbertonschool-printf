#include "main.h"

/**
 * printString - print each char from a string
 * @arg: list of arguments
 * @count: argument for count
 */

void printString(va_list arg, int *count)
{
	char *str = va_arg(arg, char*);

	if (str == NULL)
		str = "(null)";

	while (*str)
	{
		putCharAndCount(*str, count);
		str++;
	}
}
