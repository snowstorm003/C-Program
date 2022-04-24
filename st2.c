// Program to Add Two Distances (in inch-feet system) using Structures.

#include <stdio.h>

typedef struct
{
    int ft;
    int inch;
} st2;

int main()
{
    st2 d1, d2, add;

    printf("Enter 1st Distance :-");

    printf("Enter the feet : ");
    scanf("%d", &d1.ft);
    printf("Enter the inch: ");
    scanf("%f", &d1.inch);

    printf("Enter 2nd Distance :-");

    printf("Enter the feet : ");
    scanf("%d", &d2.ft);
    printf("Enter the inch: ");
    scanf("%f", &d2.inch);

    add.ft = d1.ft + d2.ft;
    add.inch = d1.inch + d2.inch;

    printf(" Sum : %d feet %d inch", add.ft, add.inch);     //Error on printing inch

    return 0;
}