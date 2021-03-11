#include<stdio.h>

void compare(char *s1 , char *s2 , int n)
{
  int i = 0 , k = 0;
  while(i<n)
  {
    if(*(s1+i) > *(s2+i)){
      printf("Not same\n");
    }
    if(*(s1+i) < *(s2+i)){
      printf("Nott same\n");
    }
    else{
      k++;
    }
    i++;
  }
  if(i==k)
  {
    printf("Same\n");
  }
}

int main(int argc, char const *argv[]) {
  /* code */
  char str1[20] = "cdac";
  char str2[20] = "cdaerabad";

  compare(str1 , str2 , 3);
  return 0;
}
