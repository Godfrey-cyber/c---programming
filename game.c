#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    const int MIN = 1;
    const int MAX = 100;
    int guess;
    int guesses;
    int answer;

    srand(time(0));

    answer = (rand() % MAX) + MIN;

    
    do
    {
        printf("Type a guess: ");
        scanf("%d", &guess);
        if (guess > answer)
        {
            printf("Too high\n");
        }
        else if (guess < answer)
        {
            printf("Too low\n");
        }
        else
        {
            printf("CORRECT 👍");
        }
        guesses++;
    } while (guess != answer);
    printf("Answer: %d\n", answer);

    return 0;
}
