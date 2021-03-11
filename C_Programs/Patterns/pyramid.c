#include<stdio.h>

void pattern(int rows)
{
  int i , j ;

  for(int i = 1 ; i <= rows ; i++)
  {
    for(int j=i ; j<=rows ; j++)
    {
      printf("  ");
    }

    for(j = 1 ; j <= ((2*i)-1) ; j++)
    {
      printf(" *");
    }
    printf("\n");
  }

}

int main()
{
  int rows;
  printf("Enter rows:\n");
  scanf("%d",&rows );

  pattern(rows);
}
