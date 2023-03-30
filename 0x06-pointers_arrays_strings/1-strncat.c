#include "main.h"
/**
 * _strncat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes used from src.
 * Return: the pointer to dest.
 */
char *_strncat(char *dest,char *src,int n)
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
