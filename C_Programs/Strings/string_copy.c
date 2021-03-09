#include<stdio.h>
#include<string.h>

void str_copy(char *str , char *str1)
{
  for(int i = 0 ; i<strlen(str);i++)
  {
    str1[i] = str[i];
  }
  printf("After copying = %s\n",str1);
}

int main()
{
  char *str = "Hello world";
  int len = strlen(str);
  char str1[len];

  str_copy(str , str1);
}
