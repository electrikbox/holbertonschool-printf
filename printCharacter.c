#include "main.h"

/**
 * printCharacter - print a character
 * @arg: list of arguments
 * @count: argument for count
 *
 */

void printCharacter(va_list arg, int *count)
{
	char c = va_arg(arg, int);

	putCharAndCount(c, count);
}
