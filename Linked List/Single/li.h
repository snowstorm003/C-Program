#include <stdio.h>
#include <stdlib.h>

typedef struct st
{
    int data;
    struct st *next;
} Node;
Node *create_node(int value);                            // to create a new node
void append(Node **head, int value);                     // to add new node
void traverse(Node *head);                               // to move across the linked list
void delete (Node *head, int n);                         // function to delete nth node
void add(Node **current, int value, int n);              // function to add a node at nth position
void reversen(Node **head);                              // to reverse without recursion
void reverse(Node *head);                                // to reverse using recursion
