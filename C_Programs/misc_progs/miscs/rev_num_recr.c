#include<stdio.h>

int rev_num(int num)
{
	printf("%d\n",num/10);
	static int revnum = 0;
	static int base_pos = 1;

	if(num > 0)
	{
		rev_num(num/10);
		revnum += (num % 10) * base_pos;
		printf("revnum = %d\n",revnum);
		base_pos *= 10;
	}
	return revnum;
}

int main()
{
	int num = 12345 , rev;

	rev = rev_num(num);
	printf("%d\n",rev);
}
