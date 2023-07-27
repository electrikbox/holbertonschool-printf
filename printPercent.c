#include "main.h"

/**
 * printPercent - print a %
 * @arg: list of arguments
 * Return: length
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
