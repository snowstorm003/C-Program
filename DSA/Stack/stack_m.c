#include "stack.h"

int main()
{
    Stack bucket;

    int bsize;
    printf("Enter the size of bucket: ");
    scanf("%d", &bsize);
    bucket.size = bsize;

    init(bucket);
    push(bucket, 5);
    printf("%d\n", peek(bucket));

    return 0;
}