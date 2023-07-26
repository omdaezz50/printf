#include "main.h"
/**
 * format_spec - selects the right printing function
 * depending on the conversion specifier passed to _printf
 * @c: character that holds the conversion specifier
 * Description: the function loops through the structs array
 * functions[] to find a match between the specifier passed to _printf
 * and the first element of the struct, and then the approriate
 * printing function
 * Return: a pointer to the matching printing function
 **/

int (*format_spec(char c))(va_list, flag_type *)
{
	int i = 0;
	fmt_t functions[] = {
	{'%', print_percent},
	{'c', print_char},
	{'s', print_string},
	{'i', print_int},
	{'d', print_int},
	{'b', print_binary},
	{'u', print_unsigned},
	{'o', print_octal},
	{'x', print_hexa},
	{'X', print_hexa_cap},
	{'S', print_custom_s},
	{'p', print_address},
	{'r', print_reverse},
	{'R', print_rot13}
	};

	for (i = 0; i < 14; ++i)
	{
		if (c == functions[i].s)
		{
			return (functions[i].frmt_spec);
		}
	}
return (0);
}
