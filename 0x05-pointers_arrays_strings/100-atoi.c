#include <stdio.h>
/**
 * _atoi - change the string to integer
 * @s - string that is changed
 * Return: 0
 */

int _atoi(char *s)
{
  int sign = 1;

  int index = 0;

  int num = 0;

  while (s[index] != '\0')
  {

    if (48 <= s[index] && s[index] <= 57)
    {

      while (48 <= s[index] && s[index] <= 57 && s[index] != '\0')
      {
        num = (num * 10) + s[index] - 48;
        index++;

      }
      return sign * num;
      break;
    }
    else
    {
      if (s[index] == '+')
      {
        sign *= 1;
      }
      else if (s[index] == '-')
      {
        sign *= -1;
      }

      index++;
    }
  }
  return 0;
}
