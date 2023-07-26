#include "main.h"

/**
 * print_address - prints address of input in hexa format
 * @pointer_arg: va_list arguments from _printf
 * @flag: pointer to struct flags
 * Return: number of char printed
 */
int print_address(va_list pointer_arg, flag_type *flag)
{
	char *p_str;
	unsigned long int p_address = va_arg(pointer_arg, unsigned long int);

	register int count = 0;

	(void)flag;

	if (!p_address)
	{
		return (_put_string("(nil)"));
	}
	p_str = convert(p_address, 16, 1);
	count += _put_string("0x");
	count += _put_string(p_str);
return (count);
}
