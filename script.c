#include <stdio.h>
#include <stdbool.h>
#include <string.h>
void printArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
}
int main()
{

    // char cars[][10] = {"Ford", "Tesla", "Toyota", "Mercedes"};
    // strcpy(cars[0], "Honda"); /*replacing ford with tesla*/
    // for (int i = 0; i < sizeof(cars) / sizeof(cars[0]); i++){
    //     printf("%s\n", cars[i]);
    // }

    // char x = 'X';
    // char y = 'Y';

    // char temp;
    // temp = x;
    // x = y;
    // y = temp;

    // printf("X = %c\n", x);
    // printf("Y = %c\n", y);

    // char x[15] = "water";
    // char y[15] = "soda";
    // char temp[15];

    // strcpy(temp, x);
    // strcpy(x, y);
    // strcpy(y, temp);

    // printf("X = %s\n", x);
    // printf("Y = %s\n", y);

    int array[] = {2, 3, 5, 7, 4, 9, 1, 6, 8};
    int size = sizeof(array) / sizeof(array[0]);

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            printf("%d\n", array[j + 1]);
            printf("%d\n", array[j]);
            // printf("%d\n", array[i]);
            if(array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        };
    };

    printArray(array, size);

    // printf("%d\n", size);
    return 0;
}