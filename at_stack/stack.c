// #include <stdio.h>
// #include <stdlib.h>
// #define MAX 4

// int stack_arr[MAX];
// int top = -1;

// void push(int data)
// {
//     if (top == MAX -1)
//     {
//         printf("stack overflow\n");
//         return; // indicates the end of the function
//     }
//     top = top + 1;
//     stack_arr[top] = data;
// }

// int pop()
// {
//     int value;
//     if (top == -1)
//     {
//         printf("stack underflow\n");
//         exit(1);
//     }
//     value = stack_arr[top];
//     top = top -1;
//     return value;
// }

// void print()
// {
//     int i;
//     if (top == -1)
//     {
//         printf("stack underflow\n");
//         return;
//     }
//     for (i = top; i >= 0; i--)
//     {
//         printf("%d ", stack_arr[i]);
//     }
//     printf("\n");
// }

// int main()
// {
//     int data;
//     push(13);
//     push(22);
//     push(40);
//     push(50);
//     // data = pop();
//     data = pop();
//     printf("%d\n", data);
//     return 0;
// }





// #include <stdio.h>
// #include <stdlib.h> // for exit () function
// #define MAX 5

// int stack_arr[MAX];
// int first = -1;

// void push(int data)
// {
//     int i;
//     first += 1;
//     for (i = first; i > 0; i--)
//         stack_arr[i] = stack_arr[i - 1];
//     stack_arr[0] = data;
// }

// void print()
// {
//     int i;
//     if (first == -1)
//     {
//         printf("Stack underflow\n");
//         exit(1);
//     }
//     for (i = 0; i <= first; i++)
//         printf("%d ", stack_arr[i]);
//     printf("\n");
// }

// int main()
// {
//     push(30);
//     push(90);
//     push(40);
//     print();
//     return 0;
// }




// #include <stdio.h>

// void main()
// {
//     int age;
//     int lesson;
//     printf("Enter age and lesson: ");
//     scanf("%d %d", &age, &lesson);

//     if (age > 5)
//     {
//         if (lesson == 1)
//         {
//         printf("Her age is greater than 5, and she's going to lesson, she should then be given 10 biscuits");
//         }
//         else
//         {
//             printf("Her age is greater than 5, but she's not going to lesson, she should then be given 5 biscuits");
//         }
//     }
//     else
//     {
//         printf("She's still small, just givee her 2 biscuits");
//     }
    


// }


