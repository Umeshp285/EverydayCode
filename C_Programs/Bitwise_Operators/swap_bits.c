// Swap 1st and 2nd bit of hex value

#include<stdio.h>

int main()
{
	unsigned char data = 0xA;

	unsigned char bit_1 = (data >> 1) & 1;

	unsigned char bit_2 = (data >> 2) & 2;

	unsigned char xor_of_bit = bit_1 ^ bit_2;

	printf("After swap = %2X\n", data ^ (xor_of_bit << 1) | (xor_of_bit << 2));

}
