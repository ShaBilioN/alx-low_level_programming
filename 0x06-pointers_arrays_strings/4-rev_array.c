#include "main.h"

void reverse_array(int *a, int n)
{
    int i = n;

    while (i--)
    {
        printf("%d", a[i]);
        if (i != 0)
        {
            printf(", ");
        }
    }
    printf("\n");
}
