// Program to Calculate Difference Between Two Time Periods

#include <stdio.h>

typedef struct
{
    int hr;
    int min;
    int sec;
} time;

time diff(time t1, time t2)
{
    time d;
    if (t1.sec < t2.sec)
    {
        t1.sec = t1.sec + 60;
        d.sec = t1.sec - t2.sec;
        t1.min--;
    }
    else
    {
        d.sec = t1.sec - t2.sec;
    }
    if (t1.min < t2.min)
    {
        t1.min = t1.min + 60;
        d.min = t1.min - t2.min;
        t1.hr--;
    }
    else
    {
        d.min = t1.min - t2.min;
    }
    d.hr = t1.hr - t2.hr;

    return d;
}
int main()
{
    time t1, t2;
    time td;

    printf("Enter hour ");
    scanf("%d", &t1.hr);

    printf("Enter minute ");
    scanf("%d", &t1.min);

    printf("Enter second ");
    scanf("%d", &t1.sec);

    printf("Enter hour ");
    scanf("%d", &t2.hr);

    printf("Enter minute ");
    scanf("%d", &t2.min);

    printf("Enter second ");
    scanf("%d", &t2.sec);

    td = diff(t1, t2);

    printf(" Hour %d ", td.hr);
    printf(" Minute %d ", td.min);
    printf(" Second %d ", td.sec);
    return 0;
}