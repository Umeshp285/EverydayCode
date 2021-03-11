#include<stdio.h>
#define SIZE 40

char *my_strcat(char *s1, const char *s2)
{
    //Pointer should not null pointer
    if((s1 == NULL) && (s2 == NULL))
        return NULL;
    //Create copy of s1
    char *start = s1;
    //Find the end of the destination string
    while(*start != '\0')
    {
        start++;
    }
    //Now append the source string characters
    //until not get null character of s2
    while(*s2 != '\0')
    {
        *start++ = *s2++;
    }
    //Append null character in the last
    *start = '\0';

    printf("%s\n",s1);
    return s1;
  }

int main()
{
  char dest[SIZE] = "cdac";
  char src[] = "hyderabad";
  //Append src in dest
  my_strcat(dest, src);
  //print dest after appending src
  // printf("%s\n\n",dest);
  // printf("%s\n\n",src);
  return 0;
}
