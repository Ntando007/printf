#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "main.h"
/**
 * _printf - creates printf function
 * @format: string with format specifier
 * Return: the number of characters printed
 */
 int _printf(const char *format, ...)
{
if (format != NULL)
{
int count = 0;
int i;
int (*m)(va_list);
va_list args;

va_start(args, format);
i = 0;
if (format[0] == '%' && format[1] == '\0')
  return (-1);
  
 while (format != NULL && format[i] != '\0')
 {
 if (format[i] == '%') /* return format remainder 'i' */ 
 {
 if (format[i + 1] == '%')
 {
 count += _putchar(format[i]);
 i += 2;
 }
 else
 {
 
