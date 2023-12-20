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

int pop()
{
    int value;
    if (top == -1)
    {
        printf("stack underflow\n");
        exit(1);
    }
    value = stack_arr[top];
    top = top -1;
    return value;
}

void print()
{
    int i;
    if (top == -1)
    {
        printf("stack underflow\n");
        return;
    }
    for (i = top; i >= 0; i--)
    {
        printf("%d ", stack_arr[i]);
    }
    printf("\n");
}

int main()
{
    int data;
    push(13);
    push(22);
    push(40);
    push(50);
    // data = pop();
    data = pop();
    printf("%d\n", data);
    return 0;
}