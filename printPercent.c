#include "main.h"

/**
 * printPercent - print a %
 * @arg: list of arguments
 * @count: argument for count
 *
 */

void printPercent(va_list arg, int *count)
{
	char c = va_arg(arg, int);

	c = '%';

	putCharAndCount(c, count);
}
