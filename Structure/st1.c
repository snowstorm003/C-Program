// Program to Store Information of a Student Using Structure.

#include <stdio.h>

typedef struct
{
    char name[100];
    int id;
    char dept[50];
    char sec;
    float cgpa;

} st;

int main()      //Error while scanning id n dept
{
    st studinfo;
    printf(" Enter student information :-");
    printf("\n Name : ");
    scanf(" %s ", &studinfo.name);
    printf("\n Id : ");
    scanf(" %d ", &studinfo.id);
    printf("\n Department : ");
    scanf(" %s ", &studinfo.dept);
    printf("\n Section : ");
    scanf(" %s ", &studinfo.sec);
    printf("\n CGPA : ");
    scanf(" %f ", &studinfo.cgpa);

    printf(" Student information :-");
    printf(" Name : %s ", studinfo.name);
    printf(" Id :  %d ", studinfo.id);
    printf(" Department : %s " , studinfo.dept);
    printf(" Section : %s " , studinfo.sec);
    printf(" CGPA : %f " , studinfo.cgpa);
    return 0;
}