#include "main.h"
/**
*main -  returns a pointer to a newly allocated space in memory.
*@str: string.
*
*Return: pointer of array of chars.
*/
char *_strdup(char *str)
{
	unsigned int i, size;
	char *A;

	i = 0;
	size = 0;
	while (str[i] != '\0')
	{
		size++;
		i++;
	}

	if (size <= 0)
		return (NULL);

	A = (char *)malloc(sizeof(char) * size + 1);

	if (A == NULL)
		return (NULL);

	for (i = 0; i <= size; i++)
		A[i] = str[i];

	return (A);
}
