#include "main.h"
/**
 * parser - Receives the main string and all the necessary parameters to
 * print a formated string.
 * @format: A string containing all the desired characters.
 * @funcs: A list of all the posible functions.
 * @va: A list containing all the argumentents passed to the program.
 * Return: A total count of the characters printed.
 */
int parser(const char *format, conver_t funcs[], va_list va)
{
	int i, j, r_val, printed_chars;

	printed_chars = 0;
	for (i = 0; format[i] != '\0'; i++)/* Iterates through the main str*/
	{
		if (format[i] == '%') /*Checks for format specifiers*/
		{
			/*Iterates through struct to find the right func*/
			for (j = 0; funcs[j].sym != NULL; j++)
			{
				if (format[i + 1] == funcs[j].sym[0])
				{
					r_val = funcs[j].f(va);
					if (r_val == -1)
						return (-1);
					printed_chars += r_val;
					break;
				}
			}
			if (funcs[j].sym == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					printed_chars = printed_chars + 2;
				}
				else
					return (-1);
			}
			i = i + 1; /*Updating i to skip format symbols*/
		}
		else
		{
			_putchar(format[i]); /*call the write function*/
			printed_chars++;
		}
	}
	return (printed_chars);
}
