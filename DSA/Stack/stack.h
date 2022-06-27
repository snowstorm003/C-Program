#include <stdio.h>
#include <stdlib.h>

typedef struct st
{
    int *arr;
    int *top;
    int size;
}Stack;

void init(Stack bucket);
int is_full(Stack bucket);
int is_empty(Stack bucket);
void push(Stack bucket, int value);
int pop(Stack bucket);
int peek(Stack bucket);

