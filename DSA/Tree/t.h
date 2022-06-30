#include <stdio.h>
#include <stdlib.h>

typedef struct st
{
    struct st* left;
    struct st* right;
    int data;
}Node;

Node* create_node(int value);
void pre_order(Node *root);
void in_order(Node *root);
void post_order(Node *root);