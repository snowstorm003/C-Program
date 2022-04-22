//

#include <stdio.h>

struct st
{
    int key;
    int index;
    char ch;
    float fl;
};

struct st func(int *arr, int size, int key)
{
    struct st bag1;
    int i;

    struct st*pt;

    for (i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            bag1.index = i;
            bag1.key = key;
            bag1.ch = 'A';
            bag1.fl = 45.025;
        }
    }

    return bag1;
}

int main()
{
    int array[] = {1, 2, 3, 4, 5};
    struct st res;
    struct st *pt;

    res = func(array, 5, 2);

    pt = &res;

    printf(" Index : %d", res.index);
    printf(" Key : %d", res.key);
    printf(" Character : %c", res.ch);
    printf(" Float : %.2f", res.fl);

    pt->index = 8;
    pt->key = 3;
    pt->ch = 'B';
    pt->fl = 0.32;

    printf(" Index : %d", res.index);
    printf(" Key : %d", res.key);
    printf(" Character : %c", res.ch);
    printf(" Float : %.2f", res.fl);



    printf(" Index : %d", pt->index);
    printf(" Key : %d", pt->key);
    printf(" Character : %c", pt->ch);
    printf(" Float : %.2f", pt->fl);

    return 0;
}
