#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - concatenate two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	int size1 = 0;
	int size2 = 0;
	int i = 0;
	char *s1s2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[size1] != '\0')
		size1++;
	while (s2[size2] != '\0')
		size2++;
	s1s2 = (char *) malloc((size1 + size2 + 1) * sizeof(char));
	if (s1s2 == NULL)
	{
		return (NULL);
	}
	while (i < size1)
	{
		s1s2[i] = s1[i];
		i++;
	}
	while (i < size1 + size2)
	{
		s1s2[i] = s2[i - size1];
		i++;
	}
	s1s2[i] = '\0';
	return (s1s2);
}
