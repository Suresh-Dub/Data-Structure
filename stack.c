//***************************************** Implementing Stacks Operations  ************************************************

#include<stdio.h>
#include<stdlib.h>
 
#define MAX 5                           //Maximum number of elements that can be stored
                                        // Here we assign the value of top in stack is -1.
int top=-1,stack[MAX];
void push();                            //Push is used to add elements in stack.
void pop();                             //Pop is used to del. elements in stack.
void display();                         //Display is used to view elements in stack.
 
int main()
{
int ch;
while()                                //infinite loop, will end when choice will be 4
{
printf("\n*********** Stack Menu ***********");
printf("\n\n1.Push\n2.Pop\n3.Display\n4.Exit");
printf("\n\nEnter your choice(1-4):");
scanf("%d",&ch);
switch(ch)
{
case 1: push();
break;
case 2: pop();
break;
case 3: display();
break;
case 4: exit(0);
default: printf("\nWrong Choice!!");
}
}
}
                                        //Here we Call Push Function to add Elements in Stacks.

void push()
{
int value;
if(top==MAX-1)
{
printf("\n********Stack is full!********");
}
else
{
printf("\nHey! Enter the element to push:");
scanf("%d",&value);
top=top+1;
stack[top]=value;
}
}
                                        //Here we Call Pop Function to del. Elements in Stacks.


void pop()
{
                                        //Here we use condition to check if top is equal to -1.
if(top==-1)
{
printf("\nStack is empty!!");
}
else
{
printf("\nDeleted element is %d",stack[top]);
top=top-1;
}
}
                                        //Here we Call Display Function to view Elements in Stacks.

void display()
{
int index;
                                        //Here we use condition to check if Stack is Empty or Not.
if(top==-1)
{
printf("\nOh! Stack is empty!!");
}
else            
{
printf("\nElements in Stack is...\n");

for(index=top;index>=0;--index)
printf("%d\n",stack[index]);
}
}
