#include"stdio.h"

void calculate_sum(int arr[] , int n)
{
	int sum = 0;
	for(int i = 0 ; i < n ; i++)
 	{
		sum += arr[i];
	}
	printf("Sum of array element = %d\n",sum);
	
}

int main()
{
	int arr[] = {1,2,3,4,5};

	int len = sizeof(arr)/sizeof(arr[0]);

	calculate_sum(arr , len);

}
