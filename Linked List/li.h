#include <stdio.h>
#include <stdlib.h>

typedef struct st
{
    int data;
    struct st *next;
} Node;

Node *create_node(int value);                               //to create a new node
void append(Node **head, int value);                        //to add the newly created node
void traverse(Node *head);                                  //to move across the linked list
void delete(Node *head, int n);                             //function to delete nth node
void add(Node *head, int n, int value);                                //function to add a node at nth position