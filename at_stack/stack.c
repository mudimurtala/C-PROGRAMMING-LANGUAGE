#include <stdio.h>
#include <stdlib.h>
#define MAX 4

int stack_arr[MAX];
int top = -1;

void push(int data)
{
    if (top == MAX -1)
    {
        printf("stack overflow\n");
        return; // indicates the end of the function
    }
    top = top + 1;
    stack_arr[top] = data;
}

int main()
{
    push(13);
    push(22);
    push(40);
    push(50);

    for (int i = 0; i < MAX; i++)
    {
        printf("%d\n", stack_arr[i]);
    }
    return 0;
}