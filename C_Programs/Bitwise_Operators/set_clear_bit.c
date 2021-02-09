// Set and clear bits of a number


#include<stdio.h>


int main()
{
	unsigned int num = 0xC;

	num |= (1<<0); //set 0th
	num |= (1<<1); //set 1st

	printf("After setting 0th nd 1st bit = %04X\n",num);

	num &= ~(1<<0); // clear 0th
	num &= ~(1<<1); // clear 1st

	printf("After clearing 0th and 1st bit = %04X\n",num);

}
