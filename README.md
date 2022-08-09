This is a collaborative project between Omojuwa Emmanuel Oluwagbenga and Clinton Nyakundi Mokaya, Software Engineering students at ALX Africa. The project aims to mimic the printf standard library function that formats and prints data.
The project was started on the 8th of August, 2022.
Description

The _printf() function produces output according to a format which is described below. This function write its output to the stdout, the standard output stream. Returns the count of printed characters when the function is successful and -1 when the function fails.

The available conversion specifiers are:

    %c: Prints a single character.
    %s: Prints a string of characters.
    %d: Prints integers.
    %i: Prints integers.
    %b: Prints the binary representation of an unsigned decimal.
    %u: Prints unsigned integers
    %x: Prints the hexadecial representation of an unsigned decimal in lowercase letters
    %X: Prints the hexadecial representation of an unsigned decimal in uppercase letters
    %r: Prints a reversed string
    %R: Prints the Rot13 interpretation of a string

Usage

    All the files are to be compiled on Ubuntu 14.04 LTS
    Compile your code with gcc -Wall -Werror -Wextra -pedantic *.c
    Include the "holberton.h" header file on the functions using the _printf()

Example


#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int a;
	int b;
	char *str;

	str = "program";
	a = _printf("%r\n", "ALX"); /*expected: XLA*/
	printf("--->%d\n", a); /*expected: 4*/

	b = _printf("%r\n", str); /*expected: margorp*/
	printf("%d\n", b); /*expected: 8*/

	b = _printf("%r\n", str); /*expected: margorp*/
	printf("%d\n", b); /*expected: 8*/
	return (0);
}


