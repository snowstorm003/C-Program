#include "li.h"

Node *create_node(int value)
{
    Node *temp;

    temp = (Node *)malloc(sizeof(Node));
    temp->data = value;
    temp->next = NULL;

    return temp;
}

void append(Node **head, int value)
{
    Node *temp = create_node(value);
    Node *current = *head;

    if (*head == NULL)
    {
        *head = temp;
        return;
    }

    while (current->next != NULL)
    {
        current = current->next;
    }

    current->next = temp;
}

void delete (Node *delhead, int n)
{
    n--;
    while (n-- > 1)
    {
        delhead = delhead->next;
    }

    delhead->next = delhead->next->next;
}

void add(Node **current, int value, int n)
{

    while (n--)
    {
         if (n == 0)
        {
            Node *new = create_node(value);
            new->next = (*current)->next;
            *current = new;
        }
        else
            current = &(*current)->next;
    }
}

    // void add(Node *addhead, int n, int value)
    // {
    //     Node *temp = create_node(value);

    //     n--;
    //     while (n-- > 1)
    //     {
    //         addhead = addhead->next;
    //     }

    //     Node *temp2 = addhead->next;
    //     addhead->next = temp;
    //     temp->next = temp2->next;
    // }

    void traverse(Node * pthead)
    {
        while (pthead != NULL)
        {
            printf("%d ", pthead->data);
            pthead = pthead->next;
        }
        printf("\n");
    }

    // void reversen(Node **head)
    // {
    //     Node *current = *head;
    //     Node *prev = NULL, *nextn = NULL;
    //     if ((*head)->next == NULL)
    //     {

    //         traverse(*head);
    //     }
    //     else
    //     {

    //         while (current != NULL)
    //         {
    //             nextn = current->next;
    //             current->next = prev;
    //             prev = current;
    //             current = nextn;
    //         }
    //         *head = prev;
    //         traverse(*head);
    //     }
    // }

    void reverse(Node * head)
    {
        if (head->next != NULL)
        {
            reverse(head->next);
        }
        printf("%d ", head->data);
    }