#include "main.h"
#include <stdlib.h>
/**
*main -  returns a pointer to a newly allocated space in memory.
*@str: string.
*
*Return: pointer of array of chars.
*/
char *_strdup(char *str)
{
	unsigned int i, j;
	char *A;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++);

	A = (char *)malloc(sizeof(char) * i + 1);

	if (A == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		A[j] = str[j];

	return (A);
}
