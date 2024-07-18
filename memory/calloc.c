#include <stdio.h>
#include <stdlib.h>

int main() {
    int *a = calloc(10, sizeof(int)); /*calloc zeros the space first*/

    for (int i = 0; i < 10; i++)
    {
        a[i] = 10 - i;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }
    printf("a: %p\n", a);
    int *save = a;
    free(a);
    printf("Save: %p\n", save);

    for (int i = 0; i < 10; i++)
    {
        printf("save[%d] = %d\n", i, save[i]);
    }
    return (0);
}