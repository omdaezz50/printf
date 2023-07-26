#include "main.h"

/**
 * print_char - prints a character to stdout
 * @char_arg: va_list arguments from _printf
 * Return: 1 on success
 */
int print_char(va_list char_arg)
{
	_putchar(va_arg(char_arg, int));
	return (1);
}

/**
 * print_string - prints a string to stdout
 * @str_arg: va_list arguments from _printf
 * Return: 1 on success
 */
int print_string(va_list str_arg)
{
	char *st = va_arg(str_arg, char *);

	if (!st)
		st = "(Null)";
	_put_string(st);
	return (1);
}

/**
 * print_percent - prints a percent sign to stdout
 * @percent_arg: va_list arguments from _printf
 * Return: the printed percent sign
 **/
int print_percent(va_list percent_arg)
{
	(void) percent_arg;
	return (_putchar('%'));
}
/**
 * print_int - prints a percent sign to stdout
 * @int_arg: va_list arguments from _printf
 * Return: numbers printed
 */
int print_int(va_list int_arg)
{
	int n = va_arg(int_arg, int);
	int res = count_digit(n);

	if (n <= 0)
		res++;

	print_number(n);
	return (res);
}
