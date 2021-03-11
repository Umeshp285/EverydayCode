#include<stdio.h>

void hollow_pattern(int m , int n) {
  int i,j;

  for (i=1 ; i <= m ; i++){
    for(j = 1 ; j <= n ; j++){
      if((i == 1) || (i == m) || (j == 1) || (j == n))
      {
        printf(" *");
      }
      else{
        printf("  ");
      }
    }
    printf("\n");
  }
  return 0;
}

int main()
{
  int m,n;
  printf("Enter row nd col for star pattern:\n");
  scanf("%d %d",&m,&n);

  hollow_pattern(m,n);
}
