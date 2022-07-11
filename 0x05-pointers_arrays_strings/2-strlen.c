#include "main.h"

/**
 *_strlen - Returns length of char array passed
 *@s: Passed in char pointer to char array
 *
 *Return: length of char
 */

int _strlen(char *s)
{
int lenS = 0;
while (s[lenS] != '\0')
{
lenS++;
}
return (lenS);
}
