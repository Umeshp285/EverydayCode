//Swap numbers

#include<stdio.h>

int swap(int *m , int *n)
{
	*m = *m ^ *n;
	*n = *m ^ *n;
	*m = *m ^ *n;

}


int main()
{
	int m , n;
	printf("Enter two numbers:\n");
	scanf("%d %d",&m,&n);

	swap(&m , &n);

	printf("After swap = %d %d\n",m , n);

}
