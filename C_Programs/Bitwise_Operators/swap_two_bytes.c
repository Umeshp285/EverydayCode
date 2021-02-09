//Swao two words/ bytes


#include<stdio.h>

int main()
{
	unsigned int n = 0x1234;

	printf("Before swap = %04X\n",n);

	n = ((n<<8)&0xff00) | ((n>>8)&0x00ff);

	printf("After swap = %04X\n",n);

}
