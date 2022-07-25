#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - creates an array
 * @size: size
 * @c: chracter
 *
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	arr = (char *) malloc(size * sizeof(char));
	if (arr != NULL)
	{
		while (i < size)
		{
			arr[i] = c;
			i++;
		}
	}
	return ((void *) arr);
}
