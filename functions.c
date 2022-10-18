#include <stdio.h>
#include <stdarg.h>
#include "main.h"
/**
 * print_c - function prints character
 *@args: c
 *Return: number of characters
 */
int print_c(va_list args)
{
	int c;

	c = va_arg(args, int);
	return (_putchar(c));
}
/**
 *print_s - function prints a string
 *args: parameter/arguments
 *Return: number of characters
 */
int print_s(va_list args)
{
	int index; 
  int count = 0;
	char *str;

	index = 0;
	str = va_arg(args, char*);
	if (str == NULL)
		str = "(null)";
	while (str[index] != '\0')
	{
		_putchar(str[index]);
		index++;
		count++;
	}
	return (count);
}
/**
 *print_percent - function pass percent symbol
 *args: parameter/arguments
 *Return: percent symbol
 */
int print_percent(va_list args)
{
	char *str;

	str = "%";
	if (va_arg(args, int) == *str)
	{
		return (*str);
	}
	return (*str);
}
/**
 *print_d - function prints a decimal
 *args: parameter/arguments
 *Return: counter
 */
int print_d(va_list args)
{
  unsigned int 
