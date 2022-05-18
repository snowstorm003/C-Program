#include "dl.h"

Node *create_node(int value)
{
    Node *temp = (Node *)malloc(sizeof(Node));

    temp->data = value;
    temp->next = NULL;
    temp->prev = NULL;

    return temp;
}

void add_end(Node **head, Node **tail, int value)
{
    Node *new_node = create_node(value);

    if (*head == NULL)
    {
        *head = new_node;
        *tail = new_node;
        return;
    }

    (*tail)->next = new_node;
    new_node->prev = *tail;
    *tail = new_node;
}

void add_begin(Node **head, Node **tail, int value)
{
    Node *new_node = create_node(value);

    if (*head == NULL)
    {
        *head = new_node;
        *tail = new_node;
        return;
    }

    (*head)->prev = new_node;
    new_node->next = *head;
    *head = new_node;
}

void traverse_next(Node *head)
{
    while (head != NULL)
    {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

void traverse_prev(Node *tail)
{
    while (tail != NULL)
    {
        printf("%d ", tail->data);
        tail = tail->prev;
    }
    printf("\n");
}

void delete_end(Node **tail)
{
    Node *temp;

    if (*tail == NULL)
    {
        printf("Wrong Input\n");
        return;
    }

    temp = *tail;

    (*tail)->prev->next = NULL;
    *tail = (*tail)->prev;
    free(temp);
}

void delete_begin(Node **head)
{
    Node *temp;

    if (*head == NULL)
    {
        printf("Wrong Input\n");
        return;
    }
    temp = *head;

    (*head)->next->prev = NULL;
    *head = (*head)->next;
    free(temp);
}

Node *search_pos(Node *head, int position)
{
    int i, count = 1;

    if (head == NULL)
    {
        printf("Wrong Input\n");
        return NULL;
    }

    if (position <= 0)
    {
        printf("Invalid Position\n");
        return NULL;
    }

    while (head->next != NULL)
    {
        count++;
        head = head->next;
    }

    if (position > count)
    {
        printf("Wrong Input\n");
        return NULL;
    }

    for (i = 1; i < position; i++)
        head = head->next;

    return head;
}

void add_in_between_after(Node *pos, int value)
{
    Node *temp;
    temp = create_node(value);

    temp->prev = pos;
    temp->next = pos->next;
    pos->next->prev = temp;
    pos->next = temp;
}

void add_in_between_before(Node *pos, int value)
{
    Node *temp;
    temp=create_node(value);

    temp->prev=pos->prev;
    temp->next=pos;
    pos->prev=temp;
    pos->prev->next=temp;
}