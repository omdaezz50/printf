#include "main.h"

/**
 * if_flag - turns on flags if _printf finds
 * a flag modifier in the format string
 * @s: character that holds the flag specifier
 * @flag: pointer to the struct flags in which we turn the flags on
 *
 * Return: 1 if a flag has been turned on, 0 otherwise
 */
int if_flag(char s, flag_type *flag)
{
	int i = 0;

	switch (s)
	{
		case '+':
			flag->plus = 1;
			i = 1;
			break;
		case ' ':
			flag->space = 1;
			i = 1;
			break;
		case '#':
			flag->hash = 1;
			i = 1;
			break;
		case '0':
			flag->zero = 1;
			break;
		case '-':
			flag->minus = 1;
			i = 1;
			break;
	}
	return (i);
}
