#include "main.h"

/**
 *_puts - Returns a string
 *@str: Char array holding string
 *
 *Return: Void
 */

void _puts(char *str)
{
int count = 0;
for (count = 0; str[count] != '\0'; count++)
{
_putchar(str[count]);
}
_putchar('\n');
}
