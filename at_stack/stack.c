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


// #include <stdio.h>

// void main()
// {
//     int marks;
//     printf("Enter marks: ");
//     scanf("%d", &marks);


//     if (marks >= 80)
//         printf("Grade is A\n");
//     else if (marks >= 70)
//         printf("Grade is B\n");
//     else if (marks >= 60)
//         printf("Grade is C\n");
//     else
//         printf("Grade is D\n");
//     printf("End of program\n");
    
// }


// #include <stdio.h>

// void main()
// {
//     char ch;
//     printf("Enter Character: ");
//     scanf("%c", &ch);

//     switch (ch)
//     {
//         case 'a':
//         case 'e':
//         case 'i':
//         case 'o':
//         case 'u':
//             printf("Vowel\n");
//             break;
//         default:
//             printf("Not Vowel\n");
//     }
// }

// #include <stdio.h>

// void main()
// {
//     int a;
//     printf("Enter a: ");
//     scanf("%d", &a);
    
//     switch (a)
//     {
//     case 10:
//         printf("Mudi");
//         break;
//     case 20:
//         printf("Murtala Daura");
//         break;
//     default:
//         printf("The default Part");
//         break;
//     case 45:
//         printf("Murtala is really a Software Engineer");
//         break;
//     }

//     printf("This is not part of the switch statement");
// }





// #include <stdio.h>

// int main()
// {
//     float marks;
//     printf("Enter marks: ");
//     scanf("%f", &marks);


//     switch (marks / 10.0)
//     {
//         case 10.0:
//         case 9.0:
//         case 8.0:
//         case 7.5:
//             printf("Grade is A1\n");
//             break;
//         case 7.0:
//             printf("Grade is B2\n");
//             break;
//         case 6.5:
//             printf("Grade is B3\n");
//             break;
//         case 6.0:
//             printf("Grade is C4\n");
//             break;
//         case 5.5:
//             printf("Grade is C5\n");
//             break;
//         case 5.0:
//             printf("Grade is C6\n");
//             break;
//         case 4.5:
//             printf("Grade is D7\n");
//             break;
//         case 4.0:
//             printf("Grade is E8\n");
//             break;
//         default:
//             printf("Grade is F9\n");
//     }

//     return 0;

// }


// #include <stdio.h>

// void main()
// {
//     int a, b, sum, sub, mul, div;
//     char operator;
//     printf("Enter operator: ");
//     scanf("%c", &operator);
//     printf("Enter two operands: ");
//     scanf("%d %d", &a, &b);

//     switch (operator)
//     {
//         case '+':
//             sum = a + b;
//             printf("Addition is: %d", sum);
//             break;
//         case '-':
//             sub = a - b;
//             printf("Difference is: %d", sub);
//             break;
//         case '*':
//             mul = a * b;
//             printf("Product is: %d", mul);
//             break;
//         case '/':
//             div = a / b;
//             printf("Division is: %d", div);
//             break;
//         default:
//             printf("Enter valid operator");

//     }
// }


// #include <stdio.h>

// void main()
// {
//     int i;
//     for (i = 10; i < 10; i++)
//         printf("i = %d\n", i);
// }

// #include <stdio.h>

// void main()
// {
//     int number, i, mul;
//     printf("Enter a number: ");
//     scanf("%d", &number);
//     for (i = 1; i <= 12; i++)
//     {
//         mul = number * i;
//         printf("%d x %d = %d\n", number, i, mul);
//     }
// }



// #include <stdio.h>

// void main()
// {
//     char ch = 'a';
//     while (ch)
//     {
//         printf("%d ,", ch);
//         ch++;
//     }
    
// }


// #include <stdio.h>

// void main()
// {
//     int i = 0;
//     do
//     {
//         printf("Mudi Daura");
//         i++;
//     } while (i > 0);
    
//     printf("Out of the loop");
    
    
// }




// #include <stdio.h>

// void main()
// {
//     for (int j = 1; j <= 60; j++)
//     {
//         for (int i = 1; i <= 5; i++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
// }





// #include <stdio.h>

// void main()
// {
//     int i = 0, j = 1;

//     while (i < 3)
//     {
//         while (j <= 3)
//         {
//             printf("%d\n", j++);
//         }
//     printf("%d\n", i++);
//     }
// }








// #include <stdio.h>
// #include <stdlib.h>
// #define MAX 5

// int stack_arr[MAX];
// int first = -1;

// int isFull()
// {
//     if (first == MAX -1)
//         return 1;
//     else
//         return 0;
// }

// int isEmpty()
// {
//     if (first == -1)
//         return 1;
//     else
//         return 0;
// }

// void push(int data)
// {
//     int i;
//     if (isFull())
//     {
//         printf("Stack Overflow\n");
//         exit(1);
//     }
//     first += 1;
//     for (i = first; i > 0; i--)
//         stack_arr[i] = stack_arr[i - 1];
//     stack_arr[0] = data;
// }

// int pop()
// {
//     int i, value;
//     if (isEmpty())
//     {
//         printf("Stack Underflow\n");
//         exit(1);
//     }
//     value = stack_arr[0];
//     for (i = 0; i < first; i++)
//         stack_arr[i] = stack_arr[i + 1];
//     first -= 1;
//     return value;
// }

// int peek()
// {
//     if (isEmpty())
//     {
//         printf("Stack Underflow\n");
//         exit(1);
//     }
//     return stack_arr[0];
// }

// void print()
// {
//     int i;
//     if (first == -1)
//     {
//         printf("Stack Underflow\n");
//         exit(1);
//     }
//     for (i = 0; i <= first; i++)
//         printf("%d ", stack_arr[i]);
//     printf("\n");
// }

// int main()
// {
//     int choice, data;
//     while(1)
//     {
//         printf("\n");
//         printf("1. Push\n");
//         printf("2. Pop\n");
//         printf("3. Print the top element\n");
//         printf("4. Print all the elements of the stack\n");
//         printf("5. Quit\n");
//         printf("Please enter your choice: ");
//         scanf("%d", &choice);

//         switch (choice)
//         {
//             case 1:
//                 printf("Enter the element to be pushed: ");
//                 scanf("%d", &data);
//                 push(data);
//                 break;

//             case 2:
//                 data = pop();
//                 printf("Deleted element is %d\n", data);
//                 break;

//             case 3:
//                 printf("The topmost element of the stack is %d\n", peek());
//                 break;

//             case 4:
//                 print();
//                 break;

//             default:
//                 printf("Wrong choice\n");
//         }
//     }
//     return 0;
// }












/*  Prime factorization program  */

// #include <stdio.h>
// #include <stdlib.h>
// #define MAX 10

// int stack[MAX];
// int top = -1;

// int isFull()
// {
//     if (top == MAX -1)
//         return 1;
//     else
//         return 0;
// }

// int isEmpty()
// {
//     if (top == -1)
//         return 1;
//     else
//         return 0;
// }

// void push(int n)
// {
//     int i;
//     if (isFull())
//     {
//         printf("Stack Overflow\n");
//         exit(1);
//     }
//     top += 1;
//     stack[top] = n;
// }

// int pop()
// {
//     int val;
//     if (isEmpty())
//     {
//         printf("Stack Underflow\n");
//         exit(1);
//     }
//     val = stack[top];
//     top -= 1;
//     return val;
// }

// void prime_fact(int num)
// {
//     int i = 2;
//     // push all the prime factors of a number onto stack
//     while (num != 1)
//     {
//         while (num % i == 0)
//         {
//             push(i);
//             num = num / i;
//         }
//         i++;
//     }

//     // pop all the prime factors from the stack and print
//     printf("Prime factors of the number in descending order are as follows: ");
//     while (top != -1)
//     {
//         printf("\n%d\n", pop());

//     }
// }

// int main()
// {
//     int number;
//     printf("Please enter a positive number: ");
//     scanf("%d", &number);

//     prime_fact(number);
//     return 0;
// }











// #include <stdio.h>
// #include <stdlib.h>
// #define CAPACITY 6

// int container[CAPACITY];
// int tool = -1;

// void add(int new)
// {
//     if (tool == CAPACITY -1)
//     {
//         printf("Stack Overflow");
//         exit(1);
//     }
//     tool = tool + 1;
//     container[tool] = new;
// }

// int remove()
// {
//     int removable;
//     if (tool == -1)
//     {
//         printf("Stack Underflow");
//         exit(1);
//     }
//     removable = container[tool];
//     tool = tool - 1;
//     return removable;
// }

// void print()
// {
//     if (tool == -1)
//     {
//         printf("Stack Underflow\n");
//         exit(1);
//     }

//     for (int i = tool; i >= 0; i--)
//     {
//         printf("%d ", container[i]);
//     }
//     printf("\n");
// }










#include <stdio.h>
#include <stdlib.h>
#define CAPACITY 100

int container[CAPACITY];
int tool = -1;

int isFull()
{
    if (tool == CAPACITY - 1)
        return 1;
    else
        return 0;
}

int isEmpty()
{
    if (tool == -1)
        return 1;
    else
        return 0;
}

void add(int new)
{
    if (isFull())
    {
        printf("Stack Overflow");
        exit(1);
    }
    tool = tool + 1;
    container[tool] = new;
}

int remove(int removable)
{
    int removable;
    if (isEmpty())
    {
        printf("Stack Underflow");
        exit(1);
    }
    removable = container[tool];
    tool = tool - 1;
    return removable;
}

void dec2bin(int n)
{
    // print all remainder onto stack
    while (n != 0)
    {
        add (n % 2);
        n = n / 2;
    }
}

void print()
{
    if (isEmpty())
    {
        printf("Stack Underflow\n");
        exit(1);
    }
    while (!isEmpty())
    {
        printf("%d", remove());
    }
}

int main()
{
    int dec;
    printf("Enter the decimal number: ");
    scanf("%d", &dec);

    dec2bin(dec);
    print();

    return 0;
}