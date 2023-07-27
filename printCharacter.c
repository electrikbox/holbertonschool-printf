#include "main.h"

/**
 * printCharacter - print a character
 * @arg: list of arguments
 * @count: argument for count
 *
 */

int printCharacter(va_list arg)
{
	char c = va_arg(arg, int);

    _putchar(c);
    return 1;
}
