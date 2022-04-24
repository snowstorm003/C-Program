// Program to Add Two Complex Numbers by Passing Structure to a Function.

#include <stdio.h>

typedef struct
{
    int a;
    int b;
} st2;

int main()
{
    st2 n1, n2, add;

    printf("Enter 1st Complex Number :-");

    printf("\n\nEnter the real part : ");
    scanf("%d", &n1.a);
    printf("Enter the complex part : ");
    scanf("%d", &n1.b);

    printf("\nEnter 2nd Complex Number :-");

    printf("\n\nEnter the real part : ");
    scanf("%d", &n2.a);
    printf("Enter the complex part : ");
    scanf("%d", &n2.b);

    add.a = n1.a + n2.a;
    add.b = n1.b + n2.b;

    printf(" Sum : (%d + i%d)", add.a, add.b);

    return 0;
}