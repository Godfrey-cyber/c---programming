#include <string.h>
#include <stdio.h>

void sort (int array[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (j = 0; j < size - 1; j++) {
            
        }
    }
}

int main () {

    // swaping arrays
    char b[15] = "lemonade";
    char a[15] = "water";
    char empt[15];

    strcpy(empt, a);
    strcpy(a, b);
    strcpy(b, empt);

    printf("value of a: %s\n", a);
    printf("value of b: %s\n", b);

    int array[12] = {3,4,1,9,5,2,6,8};
    int size = sizeof(array)/sizeof(array[0]);
    sort(array, size);

    return 0;
}