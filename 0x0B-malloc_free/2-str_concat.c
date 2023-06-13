#include "main.h"
#include <stdlib.h>
/**
* str_concat - concatenates two strings.
*
* @s1: the first string.
* @s2: the second string.
*
* Return: string which contains the contents of the two strings.
*/
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, size = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		size++;

	for (j = 0; s2[j] != '\0'; j++)
		size++;

	str = (char *)malloc(sizeof(char) * size + 1);

	if (str == NULL)
	{
		free(str);
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];

	for (j = 0; s2[j] != '\0'; j++)
		str[i + j] = s2[j];

	return (str);
}
