#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cols;
    int rows;
    char symbol;

    printf("Your rows: ");
    scanf("%d", &rows);

    printf("Your cols: ");
    scanf("%d", &cols);

    scanf("%c");

    printf("Enter a symbol: ");
    scanf("%c", &symbol);

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= cols; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return (0);
}
