#include <stdio.h>
#include <stdlib.h>

int main() {
    // a pointer is a variable that points to the memeory address of another variable
    int num = 100;
    int *ptr = &num;

    int num2 = 200;
    int *ptr2 = &num2;

    int temp;
    temp = num;
    num = num2;
    num2 = temp;
    printf("HEX: %d\n", *ptr);

    int *a = malloc(sizeof(int) * 5);

    for (int i = 0; i < 5; i++) {
        a[i] = 1 + i;
        printf("a[%d] = %d\n", i, a[i]);
    }

    printf("malloc - %p\n", a);
    printf("malloc - %d\n", *a);

    printf("Address of num: %p\n", ptr);
    printf("Value of num: %d\n", num);
    printf("Address of num2: %p\n", ptr2);
    printf("Value of num2: %d\n", num2);

    free(a);
    return (0);
}