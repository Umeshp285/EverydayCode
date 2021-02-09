#include<stdio.h>

int binary(int n)
{
	for(int i = 15 ; i>=0 ; i-- )
	{
	    if((1<<i)&n)
	    {
		printf("1");
	    }
	    else
		printf("0");
	}
}


int main()
{
	int n;

	printf("Enter decimal number:\n");
	scanf("%d",&n);

	printf("Number = %d\n",n);

	binary(n);
}
