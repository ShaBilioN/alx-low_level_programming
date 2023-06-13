#include "main.h"
#include <stdlib.h>
/**
* create_array - creates an array of chars.
* @size: the size of the array
* @char: the first element in the array
*
* Return:  pointer to the array
*/
char *create_array(unsigned int size, char c)
{
    unsigned int i;
    char *A;

    if (size <= 0)
    {
        return (NULL);
    }
    A = malloc(sizeof(c) * size);

    for (i = 0; i < size; i++)
    {
        A[i] = c;
    }

    return (A);
}
