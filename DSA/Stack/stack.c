#include "stack.h"

void init(Stack bucket)
{
    bucket.arr = (int *)malloc(bucket.size * sizeof(int));
    bucket.top = NULL;
}

int is_full(Stack bucket)
{
    if (bucket.top == bucket.arr[bucket.size-1])
        return 1;
    else
        return 0;
}

int is_empty(Stack bucket)
{
    if (bucket.top == -1)
        return 1;
    else
        return 0;
}

void push(Stack bucket, int value, int index)
{
    if (is_full(bucket) == 1)
        return;

    bucket.top = bucket.arr[index];
    bucket.arr[bucket.top] = value;
}

int pop(Stack bucket)
{
    int ans;

    if (is_empty(bucket) == 1)
        return -9999;

    ans = bucket.arr[bucket.top];
    bucket.top = bucket.top - 1;

    return ans;
}

int peek(Stack bucket)
{
    if (is_empty(bucket) == 1)
        return -99999;

    return bucket.arr[bucket.top];
}