#include<stdio.h>

int isPerfect(int num)
{
  printf("num = %d\n",num);
  int sum = 0;
    for(int i = 1 ; i < num/2 ; i++)
    {
      if(num%i == 0)
      {
        sum += i;
      }
    }
    if(sum == num)
    {
      printf("sum -%d num-%d \n",sum , num);
        return 1;
    }

}

int perfect_numbers(int n)
{
  int i = 0;
  for(i = 1 ; i <= n ; i++)
  {
    if(isPerfect(i))
    {
      printf("perfect_numbers = %d \n",i);
    }
  }
}

int main()
{
  int n;
  printf("Perfect numbers upto num : \n");
  scanf("%d",&n);

  perfect_numbers(n);
}
