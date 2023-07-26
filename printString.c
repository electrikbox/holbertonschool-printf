#include "main.h"

/**
 * printString - print each char from a string
 * @arg: list of arguments
 * @count: argument for count
 */

int printString(va_list arg)
{
	char *str;
	int count = 0;

	str = va_arg(arg, char*);

	if (str == NULL)
	{
		free(str);
		str = "(null)";
	}

	while (*str)
	{
		_putchar(*str);
		str++;
		count++;
	}
	return (count);
}
