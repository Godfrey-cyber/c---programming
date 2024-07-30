#include <stdio.h>

int main () {
    FILE *pF = fopen("bash.sh", "w"); // a - append, w - write, r - read
    fprintf(pF, "!#/bin/bash");
    fclose(pF);
    return 0;
}