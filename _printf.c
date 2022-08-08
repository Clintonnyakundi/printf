#include "main.h"
/**
 * _printf - Receives the main string and all the necessary parameters to
 * print a formated string
 * @format: A string containing all the desired characters
 * Return: A total count of the characters printed
 */
int _printf(const char *format, ...)
{
	int printed_chars;
	conver_t funcs[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_integer},
		{"i", print_integer},
		{"b", print_binary},
		{"r", print_reversed},
		{"R", rot13},
		{"u", unsigned_integer},
		{"o", print_octal},
		{"x", print_hex},
		{"X", print_heX},
		{"p", print_address},
		{NULL, NULL}
	};
	va_list va;

	if (format == NULL)
		return (-1);

	va_start(va, format);
	/*Calling parser function*/
	printed_chars = parser(format, funcs, va);
	va_end(va);
	return (printed_chars);
}
