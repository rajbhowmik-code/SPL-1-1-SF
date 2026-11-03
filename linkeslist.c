#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int x;
    struct Node *next;
};

struct Node *Append(struct Node *root, int val)
{
    // node creation
    struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
    newnode->x = val;
    newnode->next = NULL;

    // if no nodes
    if(root == NULL)
    {
        root = newnode;
    }
    // if nodes already exists
    else
    {
        struct Node *currnode = root;
        while(currnode->next != NULL)
        {
            currnode = currnode->next;
        }
        currnode->next = newnode;
    }
    return root;
}

void Print(struct Node *root)
{
    struct Node *currnode = root;
    while(currnode != NULL)
    {
        printf("%d -> ", currnode->x);
        currnode = currnode->next;
    }
    printf("NULL\n");
}

int main()
{
    struct Node *root = NULL;
    int n;

    if (scanf("%d", &n) != 1) return 0;

    for(int i = 1; i <= n; i++)
    {
        int x;
        scanf("%d", &x);
        root = Append(root, x);
    }

    Print(root);

    return 0;
}
