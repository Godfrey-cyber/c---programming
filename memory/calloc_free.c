#include <stdio.h>
#include <stdlib.h>

int main(int size)
{
    int *a = calloc(size, sizeof(int) * 10);
    printf("%p\n", a);
    for (int i = 0; i < size; i++)
    {
        a[i] = size - i;
    }

    for (int i = 0; i < size; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }
    a = realloc(a, sizeof(int) * (size + 5));
    free(a);
    return (0);
}