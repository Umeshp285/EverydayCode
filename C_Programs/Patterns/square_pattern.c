#include<stdio.h>


void pattern(int m , int n) {
  int i , j;
  for( i = 0 ; i < m ; i ++)
  {
    for(j = 0 ; j < n ; j++)
    {
      printf(" *");
    }
    printf("\n");
  }

}

int main(int argc, char const *argv[]) {
  /* code */
  int m,n;
  printf("Enter row and col for pattern:\n");
  scanf("%d %d",&m,&n);

  pattern(m,n);
  return 0;
}
