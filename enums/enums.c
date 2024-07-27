#include <string.h>
#include <stdio.h>
// enums - a user defined type of a named integer indentifiers that help to make the program more readable
enum Day
{
    Sun = 1,
    Mon = 2,
    Tue = 3,
    Wed = 4,
    Thur = 5,
    Fri = 6,
    Sat = 7
};

int main()
{
    enum Day today = Sun;

    if (today == Sun || today == Sat) {
        printf("\n It is weekend paty time\n");
    } else {
        printf("\n I have to go to work\n");
    }
    return 0;
}