#include<stdio.h>
#include<string.h>
int sum = 0;

void sum_of_chars(char *str)
{
  // printf("%s\n",str);
  //int n = strlen(str);
  if(*str){

  sum = sum + str[0];
  printf(" sum %d\n", sum);
  sum_of_chars(str + 1) ;

}

printf(" sum %d\n", sum);
}


int main()
{
  char str[] = "abcd";

  sum_of_chars(str);
}
