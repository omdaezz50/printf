#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: format string containing the characters and the specifiers
 * Description: this function will call the get_print() function that will
 * determine which printing function to call depending on the conversion
 * Return: length of the formatted output string
 **/

int _printf(const char *format, ...)
{
	int (*func_p)(va_list, flag_type *flag);
	va_list arguments;
	int i = 0, l = 0;
	char buffer[BUFF_SIZE];
	char *p = buffer;
	flag_type flags = {0, 0, 0, 0, 0};

	register int printed_chars = 0;

	va_start(arguments, format);

	/* Returns (-1) if it fails */
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	/* Loop to store the value of format to buffer */
	while (i < BUFF_SIZE)
	{
		buffer[i] = format[i];
		i++;
	}
	/* writing loop */
	for (l = 0; p[l] != '\0'; l++)
	{
		if (p[l] == '%')
		{
			l++;
			while (if_flag(p[l], &flags))
				l++;
			func_p = format_spec(p[l]);
			printed_chars += (func_p)
				? func_p(arguments, &flags) : _printf("%%%c", p[l]);
		}
		else

			printed_chars += _putchar(p[l]);
	}
	va_end(arguments);
return (printed_chars);
}
