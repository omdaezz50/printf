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

int (*format_spec(char c))(va_list)
{
	int i = 0;
	fmt_t functions[] = {
	{'%', print_percent},
	{'c', print_char},
	{'s', print_string},
	{'i', print_int},
	{'d', print_int}
	};

	for (i = 0; i < 5; ++i)
	{
		if (c == functions[i].s)
		{
			return (functions[i].frmt_spec);
		}
	}
return (0);
}
