#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node{
  int data;
  struct node *next;
};

struct node *front;
struct node *rear;

void enqueue(int data)
{
  struct node *temp;
  temp = (struct node*)malloc(sizeof(struct node));
  temp->data = data;

  if(front == NULL)
  {
      front = temp;
      rear = temp;
      front->next = NULL;
      rear->next = NULL;
  }
  else
  {
    rear->next = temp;
    rear = temp;
    rear->next = NULL;
  }
}

void dequeue()
{
  struct node *temp;
  temp = (struct node*)malloc(sizeof(struct node));

  temp = front;
  front = front->next;
  free(temp);
}

void display()
{
  struct node *temp;
  temp = front;

  while(temp != NULL)
  {
    printf("%d\n",temp->data );
    temp = temp->next;
  }
}

int main()
{

  int choice , data;

  while(1)
  {
    printf("1 Enqueue\n");
    printf("2 Dequeue\n");
    printf("3 Display\n");
    scanf("%d",&choice);

    switch (choice) {
      case 1:
      {
        printf("Enter the data\n");
        scanf("%d",&data);
        enqueue(data );
        break;
      }
      case 2:
      {
        printf("Delete the data from queue\n");
        dequeue();
        break;
      }
      case 3:
      {
        printf("Display the queue:\n");
        display();
        break;
      }
      case 4:
      {
        // exit();
        break;
      }
    }
  }
}
