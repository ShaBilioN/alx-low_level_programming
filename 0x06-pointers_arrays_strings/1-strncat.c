#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes from src.
 * Return: the pointer to dest.
 */

char *_strncat(char *s1,char *s2,int n)
{
    int i = 0, count = 0, count2 = 0;

    while (*(s1 + i) != '\0')
    {
        i++;
    }

    while (count2 < n && *(s2 + count) != '\0')
    {
        *(s1 + i) = *(s2 + count);
        i++;
        count++;
        count2++;
    }
    return (s1);
}
