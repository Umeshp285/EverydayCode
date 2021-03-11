#include<stdio.h>
// #include<string.h>

void compare(char *str , char *str1)
{
  // printf("Strings = %s %s\n",str , str1);
  int flag = 0;
    while(*str != '\0' || str1 != '\0')
    {
      if(*str == *str1)
      {
        str++;
        str1++;
      }

      else if((*str == '\0' && *str1 != '\0')
              || (*str != '\0' && *str1 == '\0')
              || (*str != *str1 ))
              {
                flag = 1;
                printf("strings not same\n");
                break;
              }
    }
    if(flag == 0)
    {
      printf("Strings are same\n");
    }
}

int main()
{
  char str[] = "Hello";
  char str1[] = "World";

  compare(str , str1);
}
