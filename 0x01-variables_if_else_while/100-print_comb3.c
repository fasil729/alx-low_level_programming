#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry Point
 * Description: print all differnt combinations of two digits
 * Return: always 0(success)
 */
int main(void)
{
        int i = 1;

        while (i < 90)
        {
                if (i < 10)
                {
                        putchar('0');
                        putchar(i);
                        i++;
                }
                if (i % 10 == 0)
                {
                        int mod = i / 10;

                        mod = mod % 10;
                        i += mod + 1;
                        while (i < i+10) 
                        {
                                putchar(i);
                                i++;
                        }
                }
                if (i != 89)
                {
                        putchar(',');
                        putchar(' ');
                } 
        }
        return (0);
}
