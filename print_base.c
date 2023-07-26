#include "main.h"

/**
 * print_unsigned - prints an unsigned integer
 * @unsign_arg: va_list of arguments from _printf
 * @flag: pointer to the struct flag
 * Return: number of char printed
 */
int print_unsigned(va_list unsign_arg, flag_type *flag)
{
	unsigned int u_num = va_arg(unsign_arg, unsigned int);
	char *u_str = convert(u_num, 10, 0);
	(void)flag;

return (_put_string(u_str));
}

/**
 * print_hexa - prints a number in base 16 in lowercase
 * @hexa_arg: va_list arguments from _printf
 * @flag: pointer to the struct flag
 * Description: the function calls convert() which in turns converts the input
 * number into the correct base and returns it as a string
 * Return: the number of char printed
 */
int print_hexa(va_list hexa_arg, flag_type *flag)
{
	unsigned int h_num = va_arg(hexa_arg, unsigned int);
	char *h_str = convert(h_num, 16, 1);
	int count = 0;

	if (flag->hash == 1 && h_str[0] != '0')
		count += _put_string("0x");
	count += _put_string(h_str);
	return (count);
}

/**
 * print_hexa_cap - prints a number in  base 16 in uppercase
 * @hexa_cap_arg: va_list arguments from _printf
 * @flag: pointer to the struct flag
 * Description: the function calls convert() which in turns converts the input
 * number into the correct base and returns it as a string
 * Return: the number of char printed
 */
int print_hexa_cap(va_list hexa_cap_arg, flag_type *flag)
{
	unsigned int h_num = va_arg(hexa_cap_arg, unsigned int);
	char *h_str = convert(h_num, 16, 0);
	int count = 0;

	if (flag->hash == 1 && h_str[0] != '0')
		count += _put_string("0X");
	count += _put_string(h_str);
	return (count);
}

/**
 * print_binary - prints a number in base 2
 * @bin_arg: va_list arguments from _printf
 * @flag: pointer to the struct flag
 * Description: the function calls convert() which in turns converts the input
 * number into the correct base and returns it as a string
 * Return: the number of char printed
 */
int print_binary(va_list bin_arg, flag_type *flag)
{
	unsigned int b_num = va_arg(bin_arg, unsigned int);
	char *b_str = convert(b_num, 2, 0);

	(void)flag;

	return (_put_string(b_str));
}

/**
 * print_octal - prints a number in base 8
 * @octal_arg: va_list arguments from _printf
 * @flag: pointer to the struct flag
 * Description: the function calls convert() which in turns converts the input
 * number into the correct base and returns it as a string
 * Return: the number of char printed
 */
int print_octal(va_list octal_arg, flag_type *flag)
{
	unsigned int o_num = va_arg(octal_arg, unsigned int);
	char *o_str = convert(o_num, 8, 0);
	int count = 0;

	if (flag->hash == 1 && o_str[0] != '0')
		count += _putchar('0');

	count += _put_string(o_str);
	return (count);
}
