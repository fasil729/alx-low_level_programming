#include "main.h"

/**
 *print_rev - Prints string i reverse
 *@s: CHar array
 *
 *Return: Void
 */

void print_rev(char *s)
{
int lenS = 0;
while (s[lenS] != '\0')
{
lenS++;
}
lenS--;
while (lenS > -1)
{
_putchar(s[lenS]);
lenS--;
}
_putchar('\n');
}
