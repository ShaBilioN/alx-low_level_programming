#include "main.h"
/**
 * _strcat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest.
 */
char *_strcat(char *s1,char *s2)
{
	int i = 0, count = 0;

	while (*(s1 + i) != '\0')
	{
		i++;
	}

	while (*(s2 + count) != '\0')
	{
		*(s1 + i) = *(s2 + count);
		i++;
		count++;
	}
	return (s1);
}
