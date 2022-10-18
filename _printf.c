#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "main.h"
/**
 * _printf - creates printf function
 * @format: is a character string
 * Return: the number of characters printed
 */
 int _printf(const char *format, ...)
{
if (format != NULL)
{
int count = 0;
int index;
int (*m)(va_list);
va_list args;

va_start(args, format);
index = 0;
if (format[0] == '%' && format[1] == '\0')
  return (-1);
  
 while (format != NULL && format[index] != '\0')
 {
 if (format[index] == '%') /* return format remainder 'i' */ 
 {
 if (format[index + 1] == '%')
 {
 count += _putchar(format[index]);
 index += 2;
 }
 else
 {
  m = get_func(format[index + 1]);
  if (m)
   count += m(args);
  else
   count = _putchar(format[index]) + _putchar(format[index + 1]);
  index += 2;
 }
 }
 else
 {
  count += _putchar(format[index]);
  index++;
 }
 }
 va_end(args);
 return (count);
}
 return (-1);
}
