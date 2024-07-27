#include <stdio.h>
#include <string.h>

int main () {
    char cars[][10] = {"Mustung", "Tesla", "Ford"};
    // to add another car we shall use strcopy function
    strcpy(cars[0], "Toyota");

    // dispalying the cars
    for (int i = 0; i < sizeof(cars) / sizeof(cars[0]); i++)
    {
        printf("%s\n ", cars[i]);
    }

    return (0);
}