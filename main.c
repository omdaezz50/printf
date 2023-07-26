#include "main.h"

int main(void)
{
int a = 10;
char c = 'A';
char str[] = "Hello, world!";
void *ptr = &a;

/*Testing non-custom conversion specifiers*/

/* Output: Integer: 10*/
_printf("Integer: %d\n", a);

/* Output: Character: A*/
_printf("Character: %c\n", c);

/* Output: String: Hello, world!*/
_printf("String: %s\n", str);

/* Output: Pointer: 0x7ffeefbff568*/
_printf("Pointer: %p\n", ptr);

/* Output: Unsigned integer: 10*/
_printf("Unsigned integer: %u\n", a);

/* Output: Octal: 12*/
_printf("Octal: %o\n", a);

/* Output: Hexadecimal: a*/
_printf("Hexadecimal: %x\n", a);

/* Output: Hexadecimal (capitalized): A*/
_printf("Hexadecimal (capitalized): %X\n", a);

 /*Testing custom conversion specifiers*/
_printf("Quote: %Q\n", "The flood of print has turned reading into a process of gulping rather than savoring"); 
_printf("Liar: %L\n", "How is the world ruled and led to war? Diplomats lie to journalists and believe these lies when they see them in print"); /*Output: Liar: How is the world ruled and led to war? Diplomats lie to journalists and believe these lies when they see them in print*/

  /*Testing flag characters*/
_printf("Field width: %10s\n", str); /*Output: Field width: Hello, world!*/
_printf("Field width (left-aligned): %-10s\n", str); /*Output: Field width (left-aligned): Hello, world!*/
_printf("Zero padding: %05d\n", a); /*Output: Zero padding: 00010*/ 
_printf("Precision: %.4s\n", str); /*Output: Precision: Hell*/
_printf("Precision and field width: %10.4s\n", str); /*Output: Precision and field width:       Hell*/

  /*Testing length modifiers*/
_printf("Long integer: %ld\n", 2147483647L); /*Output: Long integer: 2147483647*/
_printf("Short integer: %hd\n", 32767); /*Output: Short integer: 32767*/

return (0);
}
