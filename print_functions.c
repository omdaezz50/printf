#include "main.h"

/**
 * print_char - prints a character to stdout
 * @char_arg: va_list arguments from _printf
 * @flag: pointer to the struct flags
 * Return: 1 on success
 */
int print_char(va_list char_arg, flag_type *flag)
{
	(void)flag;
	_putchar(va_arg(char_arg, int));
	return (1);
}

/**
 * print_string - prints a string to stdout
 * @str_arg: va_list arguments from _printf
 * @flag: pointer to the struct flags
 * Return: 1 on success
 */
int print_string(va_list str_arg, flag_type *flag)
{
	char *st = va_arg(str_arg, char *);
	(void)flag;

	if (!st)
		st = "(Null)";
	return (_put_string(st));
}

/**
 * print_percent - prints a percent sign to stdout
 * @percent_arg: va_list arguments from _printf
 * @flag: pointer to the struct flags
 * Return: 1 on success
 **/
int print_percent(va_list percent_arg, flag_type *flag)
{
	(void) percent_arg;
	(void)flag;
	_putchar('%');
	return (1);
}
/**
 * print_int - prints a percent sign to stdout
 * @int_arg: va_list arguments from _printf
 * @flag: pointer to the struct flags
 * Return: numbers printed
 */
int print_int(va_list int_arg, flag_type *flag)
{
	int n = va_arg(int_arg, int);
	int res = count_digit(n);

	if (flag->space == 1 && flag->plus == 0 && n >= 0)
		res += _putchar(' ');
	if (flag->plus == 1 && n >= 0)
		res += _putchar('+');
	if (flag->minus == 1 && n <= 0)
		res += _putchar('-');
	if (flag->zero == 1 && n >= 0)
		res += _putchar('0');
	if (n <= 0)
		res++;
	print_number(n);
	return (res);
}
