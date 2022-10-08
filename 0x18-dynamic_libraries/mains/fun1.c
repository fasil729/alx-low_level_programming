#include <unistd.h>


/**
 * _putchar->prints the character to the stndard output
 * @c - chrcter to be printed
 *
 * Return:on success 1
 * -1 if it is fail to write
 */

int _putchar(char c)
{
   return(write(1,&c,1));
}

/**
 * _is_lower-> checks if the alphabeth is lower case
 * @c - character to to be checked
 *
 * Return: 1 if lower
 * 0 if upper
 */

int _islower(char c)
{
      if (c >= 'a' && c <= 'z')
            return 1;
      else
            return 0;
}

/**
 * _isupper->check if charcter is upper case
 * @c - entry charcter
 *
 * Return: 1 if upper
 * 0 if lower
 */

int _isupper(int c)
{
   if (c >= 'A' && c <= 'Z')
         return 1;
   else
         return 0;
}

/**
 *_isalpha-> check if the character is alphabet
 *
 * Return: 1 on success otherwise 0
 */
int _isalpha(int c)
{
   if  (_islower(c) || _isupper(c))
   {
      return 1;
   }
   else
   {
      return 0;
   }
}
/**
 * _puts-> prints the string to the stdout followed by newline
 *
 *@s - Entry string
 */

void _puts(char *s)
{
   for (int i=0; s[i] != '\0'; i++)
   {
      _putchar(s[i]);
   }
   _putchar('\n');
}
