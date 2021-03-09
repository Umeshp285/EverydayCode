#include<stdio.h>
#include<string.h>

char palindrome(char *str)
{
  int start = 0;
  int end = strlen(str) - 1;

  while(start < end)
  {
    if(str[start++] != str[end--])
    {
      printf("Not Palindrome\n");
      return 1;
    }
  }
  printf("Is Palindrome\n");
}

int main()
{
  char *str = "ABBA";
  palindrome(str);
  return 0;
}
