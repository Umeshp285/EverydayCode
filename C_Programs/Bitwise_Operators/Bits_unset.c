// check if all bits are unset or not


#include<stdio.h>

int checkUnset(int n)
{
	int count=0;
	for(int i = 7 ; i >=0 ; i-- )
	{
		if(n & (1 << i))
		{
			count = 1;
			break;
		}

	}
	
	if(count == 0)
	{
		printf("All bits are Low/Unset\n");
	}
	else
	{
		printf("all bits are not unset\n");
	}

}


int main()
{
	int n;
	printf("Enter the number:\n");
	scanf("%d",&n);

	checkUnset(n);

}
