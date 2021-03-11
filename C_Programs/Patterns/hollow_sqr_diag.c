#include <stdio.h>

void pattern(unsigned int side) {
  int i = 0,j = 0;

  for( i = 1 ; i<= side ; i++)
  {
    for( j = 1 ; j<= side ; j++)
    {
      if(i == 1 || j == 1 || i == side || j == side || i == j)// || j == ((side-1)+i) )
      {
        printf(" *");
      }
      else{
        printf("  ");
      }
    }
    printf("\n");
  }
}

int main()
{
  unsigned int side;
  printf("Enter square side:\n");
  scanf("%d",&side);

  pattern(side);
}
