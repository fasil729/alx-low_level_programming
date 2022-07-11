#include "main.h"

/**
 *swap_int - Swaps two pointer values
 *@a: Pointer 1
 *@b: Pointer 2
 *
 *Return: Void
 */

void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
