#include "t.h"

int main()
{
    Node *root=NULL;

    root=create_node(16);
    root->left=create_node(25);
    root->right=create_node(19);
    root->left->left=create_node(36);
    root->left->right=create_node(40);
    root->right->left=create_node(41);
    root->right->right=create_node(42);

    pre_order(root);
    printf("\n");
    in_order(root);
    printf("\n");
    post_order(root);
    printf("\n");

}