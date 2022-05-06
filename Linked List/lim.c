#include "li.h"

int main()
{
    Node *head = NULL;

    append(&head, 5);
    append(&head, 60);
    append(&head, 5);
    append(&head, 60);
    append(&head, 5);
    append(&head, 60);

    

    delete(head, 3);

    add(head, 3, 65);

    traverse(head);
    
    //fucntion to add a node before nth position
    //function to add a node after nth position
    //function to add a node at nth position

    return 0;
}