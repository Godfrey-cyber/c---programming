#include <stdio.h>
#include <stdlib.h>
// recursion is a way of solving a problem 
// where our solutions depends on solutions 
// to smaller instances of the same problems  are functions that
int factorial(int n);
int main()
{
    int n = 0;
    int fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    // while(n >= 1) {
    //     fact = n * fact;
    //     n--;
    // }
    fact = factorial(n);
    printf("Fact: %d\n", fact);
    return (0);
}

int factorial(int n) {
    if (n == 1)
        return 1;
    return n * factorial(n - 1);
}