/*  count the digits in number */

#include<stdio.h>

void digits_in_num(int num)
{
  int count = 0;

    while (num > 0)
    {
      num = num/10;
      count++;
    }
    printf("counts = %d\n",count);
}

int main()
{
  int n = 123879445;

  digits_in_num(n);
}
