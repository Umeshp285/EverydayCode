#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node{
  int data;
  struct node *next;
};

struct node *push(int data , struct node* start)
{
  struct node *temp;
  temp = (struct node*)malloc(sizeof(struct node));

  if(start == NULL)
  {
    temp->data = data;
    temp->next = NULL;
    start = temp;
  }
  else
  {
    temp->data = data;
    temp->next = start;
  }
  printf("element pushed on stack\n");
  return start;
}

struct node *pop(struct node *start)
{
  struct node *temp;
  temp = (struct node*)malloc(sizeof(struct node));

  if(start == NULL)
  {
    printf("Underflow\n" );
  }
  else{
    printf("POP'ed element %d\n",start->data );
    temp = start;
    start = start->next;
  }
  return start;
}

struct node *peek(struct node *start)
{
  printf("Element at TOP = %d\n",start->data );
  return start;
}

struct node* display(struct node *start)
{
  struct node *temp;

  if(start == NULL)
  {
    printf("stack is empty\n");
  }
  else
  {
    temp = start;
    while(temp != NULL)
    {
      printf("%d\n",temp->data );
      temp = temp->next;
    }
  }
  return start;
}

int main()
{
  struct node *start = NULL;
  int choice , data;

  while(1)
  {
    printf("1.PUSH\n");
    printf("2.POP\n");
    printf("3.PEEK\n");
    printf("4.DISPLAY\n");
    scanf("%d", &choice);

    switch (choice) {
      case 1:
      {
        printf("Enter data:\n");
        scanf("%d",&data );
        start = push(data,start);
        break;
      }
      case 2:
      {
        printf("POP the element\n");
        start = pop(start);
        break;
      }
      case 3:
      {
        printf("PEEK of element\n");
        start = peek(start);
        break;
      }
      case 4:
      {
        printf("Display Elements\n");
        start = display(start);
      }
    }
  }
}
