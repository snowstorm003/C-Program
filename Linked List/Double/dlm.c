#include "dl.h"

int main()
{
    Node *head = NULL, *tail = NULL;
    Node *pos;
    int ch, value, position, flag = 1;

    while (flag == 1)
    {
        printf("*********MENU***********\n");
        printf("1: To add node at the end.\n");
        printf("2: To add node at the begin.\n");
        printf("3: To print the list.\n");
        printf("4: To print the list in reverse order.\n");
        printf("5: To delete the last node.\n");
        printf("6: To delete the first node.\n");
        printf("7: To add in between after.\n");
        printf("8: To add in between before.\n");
        printf("9: To delete in between after.\n");
        printf("10: To delete in between before.\n");
        printf("11: To EXIT.\n\n");

        printf("Enter your choice :\n");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("Enter the value to be inserted at the end : ");
            scanf("%d", &value);
            add_end(&head, &tail, value);
            break;
        case 2:
            printf("Enter the value to be inserted at the beginning : ");
            scanf("%d", &value);
            add_begin(&head, &tail, value);
            break;
        case 3:
            traverse_next(head);
            break;
        case 4:
            traverse_prev(tail);
            break;
        case 5:
            delete_end(&tail);
            break;
        case 6:
            delete_begin(&head);
            break;
        case 7:
            printf("Enter position : ");
            scanf("%d", &position);
            printf("Enter value for new node : ");
            scanf("%d", &value);
            pos = search_pos(head, position);
            add_in_between_after(pos, value);
            break;
        case 8:
            printf("Enter position : ");
            scanf("%d", &position);
            printf("Enter value for new node : ");
            scanf("%d", &value);
            pos = search_pos(head, position);
            add_in_between_before(pos, value);
            break;
        case 9:
            printf("Enter position : ");
            scanf("%d", &position);
            pos = search_pos(head, position);
            delete_in_between_after(pos);
            break;
        case 10:
            printf("Enter position : ");
            scanf("%d", &position);
            pos = search_pos(head, position);
            delete_in_between_before(pos);
            break;
        case 11:
            flag = 0;
            break;
        default:
            printf("Enter the correct choice.\n");
        }
    }

    return 0;
}