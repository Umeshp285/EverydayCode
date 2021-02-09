//Reverse bits of a number


#include<stdio.h>

unsigned int revnum(unsigned int n)
{
	unsigned int totalbits = sizeof(n) * 8 ;
	
	unsigned int revnum = 0 , temp;

	for(int i = 0 ; i < totalbits ; i++)
	{
		temp = ((1<<i) & n);

		if(temp)
		{
			revnum |= (1 << ((totalbits - 1) - i));
		}
	}
	
	printf("Reverse number = %u\n",revnum);


}

int main()
{
	unsigned int n = 0x4;

	revnum(n);
	return 0;

}
