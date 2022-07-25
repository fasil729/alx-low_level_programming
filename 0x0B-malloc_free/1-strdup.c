#include "holberton.h"
#include <stdlib.h>
/**
 * _strdup - creates an array with string
 * @str: string copy
 *
 * Return: pointer to array
 */
char *_strdup(char *str)
{
	char *arr;
	unsigned int i = 0;

	arr = (char *) malloc(sizeof(*str));
	if (arr != NULL)
	{
		while (*(str + i) != '\0')
		{
			arr[i] = str[i];
			i++;
		}
	}
	return (arr);
}
