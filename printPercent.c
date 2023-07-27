#include "main.h"

/**
 * printPercent - print a %
 * @arg: list of arguments
 * @count: argument for count
 *
 */

int printPercent(va_list arg)
{
	char c = va_arg(arg, int);
	int count = 1;

	c = '%';

	_putchar(c);
	return (count);
}
