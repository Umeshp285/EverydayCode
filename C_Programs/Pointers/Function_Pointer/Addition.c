#include<stdio.h>
#include<math.h>


void sum_of_numbers(int a, int b)  {
  printf("Addition - %d\n",a+b );
}

int main()
{
  int (*Addition)(int , int);
   Addition = sum_of_numbers;
   (*Addition)(3,1);
   printf("%d\n",2^2);
}
