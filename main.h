#ifndef MAIN_H
#define MAIN_H

#define BUFF_SIZE 1024

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stdarg.h>
#include <unistd.h>
/**
 * struct flags - struct containing flags to "turn on"
 * when a flag specifier is passed to _printf()
 * @plus: flag for the '+' character
 * @space: flag for the ' ' character
 * @hash: flag for the '#' character
 */
typedef struct flags
{
	int plus;
	int space;
	int hash;
	int zero;
	int minus;
} flag_type;


/**
 * struct format_type - struct to choose the right function depending
 * on the format specifier passed to _printf()
 * @s: format specifier
 * @frmt_spec: pointer to the correct printing function
 */
typedef struct format_type
{
	char s;
	int (*frmt_spec)(va_list ap, flag_type *flag);
} fmt_t;



/****************** _PRINTF ******************/

int _printf(const char *format, ...);
int (*format_spec(char c))(va_list, flag_type *);

/****************** WRITE FUNCTIONS ******************/

int _put_string(char *s);
int _putchar(char c);

/****************** COMPELEMENTARY FUNCTIONS ******************/
int count_digit(int i);
void print_number(int n);
char *convert(unsigned long int num, int base, int lowercase);
int if_flag(char s, flag_type *flag);

/****************** PRINT FUNCTIONS ******************/
int print_string(va_list str_arg, flag_type *flag);
int print_char(va_list char_arg, flag_type *flag);
int print_percent(va_list percent_arg, flag_type *flag);
int print_int(va_list int_arg, flag_type *flag);
int print_unsigned(va_list unsign_arg, flag_type *flag);
int print_hexa(va_list hexa_arg, flag_type *flag);
int print_hexa_cap(va_list hexa_cap_arg, flag_type *flag);
int print_binary(va_list bin_arg, flag_type *flag);
int print_octal(va_list octal_arg, flag_type *flag);
int print_custom_s(va_list custom_s_arg, flag_type *flag);
int print_reverse(va_list rev_arg, flag_type *flag);
int print_rot13(va_list rot_arg, flag_type *flag);
int print_address(va_list pointer_arg, flag_type *flag);



#endif
