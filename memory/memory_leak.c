#include <stdio.h>
#include <stdlib.h>

void memory_hog(int size) {
    int *a = malloc(size);
}

int main() {
   printf("hello world\n");

    return (0);
}