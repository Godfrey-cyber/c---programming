#include <stdio.h>

int main()
{
    // an array is a data structure that stores many values
    double prices[] = {5.55, 2.16, 3.06, 6.70};
    // printf("%d bytes\n", sizeof(prices));
    for (int i = 0; i < sizeof(prices) / sizeof(prices[0]); i++)
    {
        printf("$.%.2lf\n", prices[i]);
    }

    return (0);
}