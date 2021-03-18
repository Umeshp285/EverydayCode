#include<stdio.h>

struct Temp{
	int *data;
	int size;
} ;

int main()
{
	struct Temp Input;
	printf("Enter size:\n");
	scanf("%d",&Input.size);

	printf("size %d\n",Input.size);
	printf("Enter array elements:\n");

	for(int i=0 ; i< Input.size ; i++)
	{
		scanf("%d",&Input.data);
	}

	for(int j = 0 ; j < Input.size ; j++)
	{
		printf("%d ",Input.data[j]);
	}


}
