#include <stdio.h>
#include <stdlib.h>

// 链表节点结构
struct Node
{
    int value;
    struct Node *next;
};

// 创建链表
struct Node *createLinkedList(int m)
{
    struct Node *head = NULL;
    struct Node *prev = NULL;

    // 创建m个节点
    for (int i = 1; i <= m; i++)
    {
        struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
        newNode->value = i;
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

    // 将最后一个节点的next指向头节点，形成循环链表
    prev->next = head;

    return head;
}

// 解决问题并返回最后一个节点的值
int solveProblem(struct Node *head, int n)
{
    struct Node *curr = head;
    struct Node *prev = NULL;

    // 从头节点开始进行报数和删除操作，直到只剩下一个节点
    while (curr->next != curr)
    {
        // 报数n次
        for (int i = 1; i < n; i++)
        {
            prev = curr;
            curr = curr->next;
        }

        // 删除当前节点
        prev->next = curr->next;
        free(curr);
        curr = prev->next;
    }

    // 返回最后一个节点的值
    return curr->value;
}

int main()
{
    int m, n;
    printf("请输入m和n的值：");
    scanf("%d %d", &m, &n);

    // 创建链表
    struct Node *head = createLinkedList(m);

    // 解决问题并输出结果
    int result = solveProblem(head, n);
    printf("最后留在圈里的人是：%d\n", result);

    return 0;
}