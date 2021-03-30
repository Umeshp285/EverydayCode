#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define SIZE 10

int rear = -1;
int front = -1;

int queue[10];

int enqueue(int data)
{
  if(rear == SIZE - 1)
  {
    printf("Overflow\n");
  }
  else
  {
    if(front == -1)
    {
      front = 0;
    }
    rear = rear+1;
    queue[rear] = data;
  }
}

void dequeue()
{
    if(front == -1 || front > rear)
    {
      printf("Underflow\n");
    }
    else
    {
      printf("Element deleted from queue %d\n", queue[front]);
      front = front+1;
    }
}

void display()
{
  if(front == -1)
  {
    printf("Empty queue\n");
  }
  else
  {
    printf("Queue:\n");
    for(int i = front ; i <= rear ; i++)
    {
      printf("%d\n", queue[i] );
    }
  }
}

int main()
{
  int choice , data;

  while(1)
  {
    printf("1 Enqueue operation:\n");
    printf("2 Dequeue operation\n");
    printf("3 Display queue\n");
    printf("4.Exit\n");
    scanf("%d",&choice);

    switch (choice) {
      case 1:
      {
        printf("Enter the data \n");
        scanf("%d",&data);
        enqueue(data);
        break;
      }
      case 2:
      {
        printf("Delete data from queue\n");
        dequeue();
        break;
      }
      case 3:
      {
        printf("Display the queue\n");
        display();
        break;;
      }
      case 4:
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
