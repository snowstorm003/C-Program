#include "t.h"

Node *create_node(int value)
{
    Node *temp;

    temp = (Node *)malloc(sizeof(Node));

    temp->left=NULL;
    temp->right=NULL;
    temp->data=value;

    return temp;
}
void pre_order(Node *root)
{
    if(root==NULL)
        return;

    printf("%d  ",root->data);

    pre_order(root->left);
    pre_order(root->right);    
}

void in_order(Node *root)
{
    if(root==NULL)
        return;

    in_order(root->left);

    printf("%d  ",root->data);
 
    in_order(root->right);    
}

void post_order(Node *root)
{
    if(root==NULL)
        return;

    post_order(root->left);
    post_order(root->right);
    
    printf("%d  ",root->data);
}

