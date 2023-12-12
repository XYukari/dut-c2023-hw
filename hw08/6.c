#include <stdio.h>
#include <malloc.h>

struct Node
{
    int value;
    struct Node *next;
};

void swapValues(struct Node *a, struct Node *b)
{
    int temp = a->value;
    a->value = b->value;
    b->value = temp;
}

void bubbleSort(struct Node *head)
{
    if (head == NULL || head->next == NULL)
        return;

    int swapped;
    struct Node *left;
    struct Node *right = NULL;

    do
    {
        swapped = 0;
        left = head;

        while (left->next != right)
        {
            if (left->value > left->next->value)
            {
                swapValues(left, left->next);
                swapped = 1;
            }
            left = left->next;
        }
        right = left;
    } while (swapped);
}