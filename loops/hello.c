#include <stdio.h>

int main() {
    int x = 0;
    int *ptr = &x;
    printf("%p", ptr);
    printf("\n");
    for (x = 0; x <= 4; x++)
    {
        printf("%d\n", x);
        for (int i = 0; i <= 4; i++) {
            printf("%d", i);
            // printf("\n");
        }
    }
    return (0);
}