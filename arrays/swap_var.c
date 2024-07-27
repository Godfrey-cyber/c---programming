#include <stdio.h>
#include <string.h>

int main () {
    char x = 'x';
    char y = 'y';

    // swap values
    char temp = x;
    x = y;
    y = temp;
    printf("Value of x: %c\n", x);
    printf("Value of y: %c\n", y);

    return (0);
}