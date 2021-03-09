// count of Trailing zeroes int integer

#include<stdio.h>


int main()
{
	unsigned int n;
	printf("Enter the integer\n");
	scanf("%d",&n);

	int count = 0;

	while(n!=0)
	{
		if(n & 1 == 1)
			break;

		n = n>>1;
		count++;
	}

	printf("Trailing zeroes in number: %d\n",count);

}
