#include <stdio.h>

int main()
{
    struct date
    {
        int date;
        int month;
        int year;
    };

    struct date one;
    struct date two;

    one.date = 10;
    one.month = 6;
    one.year = 2026;

    two.date = 10;
    two.month = 6;
    two.year = 2026;

    bool flag = true;

    if(one.date != two.date)
        flag = false;

    if(one.month != two.month)
        flag = false;

    if(one.year != two.year)
        flag = false;

    if(flag == true)
    {
        printf("Same date");
    }
    else
        printf("Another date");

    return 0;
}