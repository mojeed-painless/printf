#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

#define NULL_STRING "(null)"
#define NUL '\0'

int _putchar(char c);
int _puts(char *str);
int _printf(const char *format, ...);
int print_char(va_list c);
int print_string(va_list s);
int print_dec(va_list d);
int print_hex(va_list x);
int print_HEX(va_list X);
int print_octal(va_list o);
int print_bin(va_list b);
int print_unsigned(va_list u);
int print_rot13(va_list R);
int print_rev(va_list r);
int print_int(va_list i);
int print_String(va_list S);
int print_pointer(va_list p);
int print_percent(va_list);

#endif
