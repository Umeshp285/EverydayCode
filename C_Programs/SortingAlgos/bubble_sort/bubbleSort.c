#include<stdio.h>

void swap(int *p , int *q)
{
	int temp = *p;
	*p = *q;
	*q = temp;
}

void bubble_sort(int arr[] , int n)
{
	int i , j;
	
	for(int i = 0 ; i< n-1 ; i++)
	{
		for(int j = 0 ; j < n-i-1 ; j++)
			if(arr[j] > arr[j+1])
				swap(&arr[j] , &arr[j+1]);
	}
}

void printArray(int arr[] , int n)
{
	printf("Sorted Array:");
	for(int i = 0 ; i< n ; i++)
		printf("%d ",arr[i]);

}


int main()
{
	int arr[] = {64,34,25,12,22,11,90};

	int n = sizeof(arr)/sizeof(arr[0]);

	//printf("length = %d\n",n);

	bubble_sort(arr , n);

	printArray(arr , n);
}
