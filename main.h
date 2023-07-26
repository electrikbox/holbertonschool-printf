#ifndef MAIN_H_
#define MAIN_H_

/* Library*/
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>




/* Structure*/

/**
 *struc specificator - for specify
 *@type: the specificator
 *@f: the function associated
 */
typedef struct 
{
	char *type;
	void(*function)(va_list arg,int *count);
}getFormatFunction;




/* Prototypes*/
int _printf(const char *format, ...);
void putCharAndCount(char c, int *count);
void printString(va_list arg, int *count);
void printCharacter(va_list arg, int *count);
void printPercent(va_list arg, int *count);



#endif
