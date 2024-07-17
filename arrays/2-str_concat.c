#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

// concat_string(char s1, char s2);
int main(void)
{
    char *s;
    s = str_concat("Betty", "Holberton");
    if (s == NULL)
    {
        printf("Failled\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);
    return (0);
}