#include<stdio.h>

void shift_ones(int num)
{
  int count = 0;
  for(int i = 0 ; i < 32 ; i++)
  {
    if((1 << i) & num)
    {
      count ++;
    }
  }
  printf("count = %d\n",count);
}


int main()
{
  int num;
  printf("Enter the number:\n");
  scanf("%d",&num);

  shift_ones(num);
}
