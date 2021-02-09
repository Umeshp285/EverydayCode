//Number of 1's counting


#include<stdio.h>

int count(int n)
{
	int count = 0;
	
	for(int i = 0; i < 32 ; i++)
	{
		if((1<<i) & n)
		{	
			count++;	
		}

	}
	printf("No. of 1's :%d\n",count);

}

int main()
{
	int n;
	printf("Enter the number:\n");
	scanf("%d",&n);

	count(n);
	return 0;
}
