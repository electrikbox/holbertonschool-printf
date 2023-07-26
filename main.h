#ifndef MAIN_H_
#define MAIN_H_

/* Library*/
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>


/* Structure*/

/**
 * struct helpconversion - get the function from the char
 * @format: First member
 * @function: Second member
 *
 * Description: will give the function associate to the char
 */
typedef struct helpconversion
{
	char format;
	int (*function)(va_list);
} helpconversion_t;

/* Prototypes*/
int _printf(const char *format, ...);
int _putchar(char c);
int printString(va_list arg);
int printCharacter(va_list arg);
int printPercent(va_list arg);
int printNumbers(va_list arg);
int getIntegerLength(int num);

int (*getPrintFunc(const char *s))(va_list);

#endif
