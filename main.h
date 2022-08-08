#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
/**
 *struct convert - structure for symbols and functions
 *@sym: operator
 *@f: function
 */
struct convert
{
	char *sym;
	int (*f)(va_list);
};
typedef struct convert conver_t;

/*Main functs*/
int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list list);
int print_string(va_list list);
int print_percent(__attribute__((unused))va_list list);
int print_integer(va_list list);
int unsigned_integer(va_list list);
int parser(const char *format, conver_t funcs[], va_list va);

/*Helper functs*/
int print_binary(va_list list);
int print_octal(va_list list);
int print_hex(va_list list);
int print_heX(va_list list);
int hex_check(int num, char x);
int print_reversed(va_list arg);
int rot13(va_list list);
char *rev_string(char *s);
void write_base(char *str);
unsigned int base_len(unsigned int num, int base);
char *_memcpy(char *dest, char *src, unsigned int n);
int print_number(va_list args);
int print_unsigned_number(unsigned int n);

#endif
