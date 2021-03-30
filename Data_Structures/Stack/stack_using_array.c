#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define SIZE 8
int stack[8];

int top = -1;
int choice , data;

int isFull()
{
    if(top == SIZE)
    {
      printf("Stack is Full\n");
      return 1;
    }
    else
    {
      return 0;
    }
}

int isEmpty()
{
  if(top == -1)
  {
    printf("Stack is Empty\n");
    return 1;
  }
  else
  {
    return 0;
  }
}

int push(int data)
{
  if(!isFull())
  {
    top = top + 1;
    stack[top] = data;
  }
  else
  {
    printf("stack is Full\n");
  }
}

void pop()
{
    if(!isEmpty())
    {
      printf("delented element - %d\n",stack[top] );
      top = top - 1;
    }
    else
    {
      printf("Stack is Empty\n");
    }
}

void peek()
{
    printf("Element at peek of stack is %d\n ",stack[top] );
}

void display()
{
  printf("Stack Elements are:\n");
  for(int i = top ; i<=0 ; i--)
  {
    printf("%d\n",stack[i] );
  }
}

int main()
{
  while(1)
  {
    printf("1.PUSH to stack\n");
    printf("2.POP from the stack\n");
    printf("3.PEEK of the stack\n");
    printf("4.DISPLAY Elements of stack\n");
    printf("5.EXIT\n");
    scanf("%d",&choice);

    switch (choice) {
      case 1:
      {
        printf("Enter the data to PUSH to stack\n");
        scanf("%d",&data);
        push(data);
        break;
      }
      case 2:
      {
        printf("POP the data from stack\n");
        pop();
        break;
      }
      case 3:
      {
        printf("PEEK of the stack\n");
        peek();
        break;
      }
      case 4:
      {
        printf("Display the stack Elements\n");
        display();
        break;
      }
      case 5:
      {
        printf("Exit\n");
        break;
      }
      default:
      {
        printf("Invalid choice\n");
        break;
      }
    }
  }
}
