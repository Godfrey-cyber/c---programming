#include <stdio.h>

int main() {
    int array[5];
    array[2] = 5;

    printf("array: %p\n", array); /* gives pointer to the 1st element of the array*/
    printf("&array: %p\n\n", &array); /*gives a pointer to the entire array adds space for 3 bytes (1 int)*/

    int matrix[3][5] = {
        {0, 1, 2, 3, 4},
        {4, 2, 3, 4, 5},
        {23, 45, 65, 78, 23}};

    printf("Matrix first element: %p\n", matrix[1] + 1);
    printf("*Matrix first element: %d\n", *(matrix[1])); /*Derefferencing*/
    printf("*Matrix + 1 first element: %d\n\n\n", *(matrix[1]) + 1); /*Derefferencing*/
    printf(" Matrix entire array = 1: %p\n", &matrix[1]);
    printf(" Matrix + 1 entire array: %p\n", &matrix[1] + 1); /*Adding one to the pointer of the array gives us the second array*/

    int *pointer = &matrix[1] + 1;

    printf("Pointer %p\n", pointer);
    printf("*Pointer %d\n", *pointer);

    return (0);
}