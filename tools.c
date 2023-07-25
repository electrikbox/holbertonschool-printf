#include "main.h"

/**
 * putCharAndCount - write and count
 * @c: given char
 * @count: argument to count
 *
 */

void putCharAndCount(char c, int *count)
{
	putchar(c);
	(*count)++;
}
