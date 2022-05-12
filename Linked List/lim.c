#include "li.h"

int main()
{
    Node *head = NULL;

    int ch, val, delp, bpos, apos, i, n, befv, afv;
    printf("1.insertion in linked list \n2.deletion from  linked list \n3.adding before nth position \n4.adding after nth position \n5.reverse the linked list ");

    do
    {
        printf("enter the choice: ");

        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("enter no. of entries:");
            scanf("%d", &n);
            for (i = 1; i <= n; i++)
            {
                printf("enter the value:");                             // entering values to the linked list
                scanf("%d", &val);
                append(&head, val);
            }
            traverse(head);
            break;

        case 2:
            printf("enter the position from where you want to delete:"); // deletion from nth position
            scanf("%d", &delp);
            delete (&head, delp);
            traverse(head);
            break;

        case 3:
            printf("enter the position before which you want to add:"); // adding before nth position
            scanf("%d", &bpos);
            printf("enter the value:");
            scanf("%d", &befv);
            addbefore(&head, befv, bpos);
            traverse(head);
            break;

        case 4:
            printf("enter the position after which you want to add:"); // adding after nth position
            scanf("%d", &apos);
            printf("enter the value:");
            scanf("%d", &afv);
            addafter(&head, afv, apos);
            traverse(head);
            break;

        case 5:
            reversen(&head);                                           // reversing the linked list
            break;
        }
    } while (ch <= 5);

    // append(&head, 5);
    // append(&head, 60);
    // append(&head, 5);
    // append(&head, 60);
    // append(&head, 5);
    // append(&head, 60);

    // add(&head, 65, 3);

    // traverse(head);

    // fucntion to add a node before nth position
    // function to add a node after nth position
    // function to add a node at nth position
    // function to print linked list in reverse order without using recursion

    // reverse(head);

    // traverse(head);

    return 0;
}
