#include"stdio.h"

void largest_element(int arr[] , int n)
{
	int max = arr[0];
	for(int i = 1 ; i < n ; i++)
	{
		if(arr[i] > max)
		max = arr[i];
	}

	printf("Max num = %d\n",max);
}

int main()
{
	int arr[] = {10 ,34,3,55,23,897,34,786};

	int len = sizeof(arr)/sizeof(arr[0]);

	largest_element(arr , len);
}
