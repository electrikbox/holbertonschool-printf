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
	void (*function)(va_list, int *);
} helpconversion_t;

/* Prototypes*/
int _printf(const char *format, ...);
int _putchar(char c);
void putCharAndCount(char c, int *count);
void printString(va_list arg, int *count);
void printCharacter(va_list arg, int *count);
void printPercent(va_list arg, int *count);
void printNumbers(va_list arg, int *count);
int getIntegerLength(int num);

void (*getPrintFunc(const char *s))(va_list, int *);

#endif
