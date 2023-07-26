#include "main.h"

/**
 * print_custom_s - Non printable characters
 * (0 < ASCII value < 32 or >= 127) are
 * printed this way: \x, followed by the ASCII code
 * value in hexadecimal (upper case - always 2 characters)
 * @custom_s_arg: va_list arguments from _printf
 * @flag: pointer to the struct flags
 * Return: number of char printed
 */
int print_custom_s(va_list custom_s_arg, flag_type *flag)
{
	int i, count = 0;
	char *res;
	char *s = va_arg(custom_s_arg, char *);

	(void)flag;

	if (!s)
		return (_put_string("(null)"));

	for (i = 0; s[i]; i++)
	{
		if (s[i] > 0 && (s[i] < 32 || s[i] >= 127))
		{
			_put_string("\\x");
			count += 2;
			res = convert(s[i], 16, 0);
			if (!res[1])
				count += _putchar('0');
			count += _put_string(res);
		}
		else
			count += _putchar(s[i]);
	}
	return (count);
}

/**
 * print_reverse - prints a string in reverse
 * @rev_arg: argument from _printf
 * @flag: pointer to the struct flags
 * Return: length of the printed string
 */
int print_reverse(va_list rev_arg, flag_type *flag)
{
	int i = 0, j = 0;
	char *rev_s = va_arg(rev_arg, char *);

	(void)flag;

	if (!rev_s)
	{
		rev_s = "(null)";
	}
	while (rev_s[i])
	{
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(rev_s[j]);
	}
return (i);
}

/**
 * print_rot13 - prints a string using rot13
 * @rot_arg: list of arguments from _printf
 * @flag: pointer to the struct flags
 * Return: length of the printed string
 */
int print_rot13(va_list rot_arg, flag_type *flag)
{
	int i, j;
	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *rot_s = va_arg(rot_arg, char *);

	(void)flag;

	for (j = 0; rot_s[j]; j++)
	{
		if (rot_s[j] < 'A' || (rot_s[j] > 'Z' && rot_s[j] < 'a') || rot_s[j] > 'z')
			_putchar(rot_s[j]);
		else
		{
			for (i = 0; i <= 52; i++)
			{
				if (rot_s[j] == rot13[i])
				{
					_putchar(ROT13[i]);
				}
			}
		}
	}
return (j);
}
