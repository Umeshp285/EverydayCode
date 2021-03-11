#include<stdio.h>

void copy(char *src , char *dest)
{
  int i = 0;
  while(src[i] != '\0')
  {
    *(dest+i) = *(src+i);
    i++;
  }
  printf("%s\n",dest);
}

int main()
{
  char src[10] = "Hello";
  char dest[10];

  copy(src , dest);
  return 0;
}
