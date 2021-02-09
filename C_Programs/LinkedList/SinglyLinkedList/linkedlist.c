#include<stdio.h>
#include<stdlib.h>

struct node
{
	int element;
	struct node *next;
};



struct node *add_beg(struct node *start , int data)
{
	struct node *temp; 
	//struct node *temp1 = start;

	temp = (struct node*)malloc(sizeof(struct node*));

	temp->element = data;
	temp->next = start;

	start = temp;

	return start;

}


struct node *add_end(struct node *start , int data)
{
	struct node *temp;
	struct node *p;

	temp = (struct node*)malloc(sizeof(struct node*));
	temp->element = data;
	temp->next = NULL;


	p = start;

	while(p->next !=NULL)
	{
		p = p->next;
	}
	
	p->next=temp;

	return start;

}


void display(struct node *start)
{
	struct node *p;
	p = start;
	
	while(p!=NULL)
	{
		printf("%d-->",p->element);
		p = p->next;
	}
	printf("\n");
}

struct node *delete_beg(struct node *start)
{
	struct node *temp;
	temp = (struct node*)malloc(sizeof(struct node*));

	if(start == NULL)
	{
		printf("List is Empty\n");
		return start;
	}
	
	temp = start; 
 
  	start = temp->next;
	free(temp);
	return start;
}


struct node *delete_end(struct node *start)
{
	struct node *temp;
	struct node *p;
	temp = (struct node*)malloc(sizeof(struct node*));

	if(start== NULL)
	{
		printf("list is empty\n");
	}
	
	p = start;
	while(p->next->next != NULL)
	{
	  p = p->next;
	}

	temp = p->next->next;

	p->next = NULL;

	return start;
	
}

int traverse(struct node* start)
{
	struct node *temp;
	int count = 0;

	if(start == NULL )
	{
		printf("List is empty\n");
	}
	else{
		temp = start;
		while(temp != NULL)
		{
			temp = temp->next;
			count++;
		}
			
	}
	return count;

}

struct node *add_at_posn(struct node* start , int data , int pos)
{
	struct node *temp ;
	struct node *p ;
	int count=0;

	temp = (struct node*)malloc(sizeof(struct node*));
	temp->element = data;

	p = start;
	while(count != (pos-1))
	{
		p = p->next;
		count++;
	}
	temp->next = p->next;
	p->next = temp;

	return start;
}

struct node *add_mid(struct node *start , int data)
{
        int count ,MidPos ;
        count = traverse(start);

        MidPos = (count/2);
        printf("Mid position is = %d\n",MidPos);

	add_at_posn(start , data , MidPos);

	return start;
}



int main()
{
	struct node *start = NULL;

	int choice , data , count , pos;


	while(1)
	{
		printf("1 Add at Beg\n");
		printf("2 Add at End\n");
		printf("3 Add at Mid\n");
		printf("4 Display List\n");
		printf("5 Delete at Beg\n");
		printf("6 Delete at End\n");
		printf("7 No. of Nodes in List - Traverse \n");
		printf("8 Add at position\n");
		printf("Enter your choice:");
		scanf("%d",&choice);


		switch(choice)
		{
			case 1 : 
				printf("Enter the data:\n");
				scanf("%d",&data);
				start = add_beg(start , data);
				break;

			case 2 :
				printf("Enter the data:\n");
				scanf("%d",&data);
				start= add_end(start,data);
				break;

			case 3 : 
				printf("Enter the data:\n");
				scanf("%d",&data);
				add_mid(start,data);
				break;

			case 4 :
				display(start);
				break;
			
			case 5 : 
				start = delete_beg(start);
				break;

			case 6 :
				start = delete_end(start);
				break;

			case 7 :
				count = traverse(start);
				printf("Nodes in Linked list = %d\n",count);
				break;

			case 8 :
				printf("Enter the data:\n");
				scanf("%d",&data);
				printf("Enter the position:\n");
				scanf("%d",&pos);
				add_at_posn(start , data , pos);
				break;

			default :
 				printf("Invalid Input\n");
				break;

		}

	}
	
}
