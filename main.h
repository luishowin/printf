#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>

#define UNUSED(x) (void) (x)
#define BUFF_SIZE 1024

/* flags*/
#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16

/* sizes */
#define S_LONG 2
#define S_SHORT 1

/**
 * struct frmt - struct opr
 * 
 * @frmt:  the format
 * @fn: the function associate
*/
struct fmt
{
    char fmt;
    int (*fn)(va_list, char[], int, int, int, int);
};


/**
 * typedef struct fmt fmt_t - struct op
 * 
 * @fmt: the format
 * @fm_t: the function asoc
*/
typedef struct  fmt fmt_t;

int _printf(const char *format, ...);
int handle_print(const char *fmt, int *i,
va_list list, char buffer[], int flags, int width, int precision, int size);




