// Swap nibbles of given byte

#include<stdio.h>

unsigned char swapnibbles(unsigned char n)
{
	unsigned char num;
	
	num = ((n & 0x0f)<<4) | ((n & 0xf0)>>4);

	printf("After swap = %u\n", num);
}

int main()
{
	unsigned char n;
	printf("Enter an Integer number:\n");
	scanf("%u",&n);

	swapnibbles(n);
	return 0;
}
