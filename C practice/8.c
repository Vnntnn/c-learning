// Write a C program to convert specified days into years, weeks and days, Ignore leap year.
#include <stdio.h>


int main()
{
    int sample_days = 1329;
    int years;
    int weeks;
    int days;

    while (sample_days > 0)
    {
        if (sample_days >= 365)
        {
            sample_days -= 365;
            years += 1;
            continue;
        }
        else if (sample_days >= 7)
        {
            sample_days -= 7;
            weeks += 1;
            continue;
        }
        else
        {
            sample_days -= 1;
            days += 1;
        }
    }

    printf("Years: %d\nWeeks: %d\nDays: %d", years, weeks, days);

    return 0;
}
