#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - Entry Point
 * Description: print all differnt combinations of two digits
 * Return: always 0(success)
 */
int main(void)
{
        int first = 0;

        int second = 1;

        int i = 0;

        while (i < 100)
        {
                if (second % 10 != 0)
                {
                        putchar(first + '0');
                        putchar(second + '0');
                        i++;
                        second++;
                        if (i != 89)
                        {
                                putchar(',');
                                putchar(' ');
                        }
                        else
                        {
                                putchar('\n');
                        }
                }
                else
                {
                        second = first + 2;
                        first++;
                        i += second;
                }
        }
        return (0);
}
