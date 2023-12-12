#include <stdio.h>
#include <malloc.h>

struct Node
{
    int value;
    struct Node *next;
};

struct Node *sort(struct Node *head1, struct Node *head2)
{
    struct Node *head = NULL;
    struct Node *prev = NULL;

    while (head1 != NULL && head2 != NULL)
    {
        struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
        if (head1->value <= head2->value)
        {
            newNode->value = head1->value;
            head1 = head1->next;
        }
        else
        {
            newNode->value = head2->value;
            head2 = head2->next;
        }
        newNode->next = NULL;
        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            prev->next = newNode;
        }
        prev = newNode;
    }
    while (head1 != NULL)
    {
        struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
        newNode->value = head1->value;
        newNode->next = NULL;
        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            prev->next = newNode;
        }
        prev = newNode;
        head1 = head1->next;
    }
    while (head2 != NULL)
    {
        struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
        newNode->value = head2->value;
        newNode->next = NULL;
        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            prev->next = newNode;
        }
        prev = newNode;
        head2 = head2->next;
    }

    return head;
}