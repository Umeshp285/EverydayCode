#include<stdio.h>


void swap(int *p , int *q)
{
	int temp = *p;
	*p	= *q;
	*q	= temp;
}

void bubble_sort(int arr[] , int n)
{
	if(n == 1)
		return;

	for(int i = 0 ; i<n-1 ; i++)
		if(arr[i] > arr[i+1])
			swap(&arr[i] , &arr[i+1]);

	bubble_sort(arr , n-1);
}


void printArray(int arr[] , int n)
{
	printf("Sorted Array: ");
	for(int i = 0 ; i<n ; i++)
	{
		printf("%d ",arr[i]);
	}
}

int main()
{
	int arr[] = {64,34,25,12,22,11,90};

	int n = sizeof(arr)/sizeof(arr[0]);
	//printf("%d\n",n);
	
	bubble_sort(arr , n);

	printArray(arr , n);
}
