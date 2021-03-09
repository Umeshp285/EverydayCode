#include<stdio.h>
#include<string.h>

void reverse_string()
{
  char c;
  scanf("%c",&c);
  if(c != '\n')
  {
    reverse_string();
    printf("%c",c );
  }
}

int main()
{
  printf("Enter string:\n");
  reverse_string();
  return 0;
}
