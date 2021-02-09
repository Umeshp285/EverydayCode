//Program to get to know Minimum number of bits require to store int num.

#include<stdio.h>

int reqd_bits(int n)
{
	int count;
	for(int i=0 ; i<32 ; i++)
	{
	 	if((1<<i) & n)
		{	
			count = i;	
		}
	}
	printf("count = %d\n",count+1);

}

int main()
{
	int n;

	printf("Enter number:\n");
	scanf("%d",&n);
	
	reqd_bits(n);

}
