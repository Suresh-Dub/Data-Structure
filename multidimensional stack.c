#include <stdio.h>
#include <stdlib.h>
int arr[100], top = -1, bot = 10;
void push1();
void push2();
void pop1();
void pop2();
void peek1();
void peek2();
void Display1();
void Display2();
int isfull();
int isempty();
void main()
{
    int choice;
    while (1)
    {
        printf("\t\n---------------------Stack Menu----------------------\n");
        printf("Enter your choice:\n");
        printf("\n\t1.Push 1 stack\n\t2.Push 2 stack \n\t3.Pop 1 stack\n\t4.Pop 2 stack\n\t5.Peek 1 stack\n\t6.Peek2 2 stack\n\t7.Display 1 stack\n\t8.Display 2 stack\n\t9.exit\n");      scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push1();
            break;
        case 2:
            push2();
            break;
        case 3:
            pop1();
            break;
        case 4:
            pop2();
            break;
        case 5:
            peek1();
            break;
        case 6:
            peek2();
            break;
        case 7:
            Display1();
            break;
        case 8:
            Display2();
            break;
        case 9:
            exit(0);
        default:
            printf("\tPlease enter a valid choice\n");
        }
    }
    return;
}
void push1()
{
    int var, n;
    n = isfull();
    if (n == 1)
        printf("Overflow");
    else
    {
        top++;
        if(top==bot)
        {
            printf("overflow");
        return ;
        }
        else{
        printf("Enter your element: ");
        scanf("%d", &var);
        arr[top] = var;
        }
    }
    return;
}
void pop1()
{
    int n = isempty();
    if (n == 1)
        printf("Underflow");
    else
    {
        printf("deleted element: %d", arr[top]);
        top--;
    }
    return;
}
void peek1()
{
    printf("Top data element in the stack is: %d", arr[top]);
    return;
}
void Display1()
{
    printf("elememts in the stack are: ");
    for (int i = top; i >= 0; i--)
        printf(" %d", arr[i]);
    return;
}
int isfull()
{
    if (top == bot || bot == top)
        return 1;
    else
        return 0;
}
int isempty()
{
    if (top == -1 || bot == 10)
        return 1;
    else
        return 0;
}
void push2()
{
    int var, n;
    n = isfull();
    if (n == 1)
        printf("Overflow");
    else
    {
        bot--;
         if(top==bot)
        {
            printf("overflow");
        return;
        }
        printf("Enter your element: ");
        scanf("%d", &var);
        arr[bot] = var;
    }
    return;
}
void pop2()
{
    int n = isempty();
    if (n == 1)
        printf("Underflow");
    else
    {
        printf("deleted element: %d", arr[bot]);
        bot++;
    }
    return;
}
void peek2()
{
    printf("Top data element in the stack is: %d", arr[bot]);
    return;
}
void Display2()
{
    printf("elememts in the stack are: ");
    for (int i = bot; i < 10; i++)
        printf(" %d", arr[i]);
    return;
}
