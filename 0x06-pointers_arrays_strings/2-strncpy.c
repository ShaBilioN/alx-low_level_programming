#include "main.h"

char *_strncpy(char *dest, char *src, int n)
{
    int i = 0;

    for(;i < n && dest[i] != '\0'; i++)
        dest[i] = src[i];
	
    return (dest);
}
