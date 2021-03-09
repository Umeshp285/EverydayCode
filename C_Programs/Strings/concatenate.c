#include<stdio.h>
#include<string.h>

void concate(char *str , char *str1)
{
  // printf("%s %s\n",str , str1);
  int length = strlen(str) + strlen(str1);
  printf("%d",length);
  char finalstr[length];
  int j = 0;
 for(int i = 0 ;str[i] != '\0';i++)
 {
   finalstr[i] = str[i];
 }
 printf("%s\n",finalstr );

for(int i = strlen(str) ; i < length ; i++)
{
  if(str[j] != '\0')
  {
    finalstr[i] = str1[j];
  }
  else
    continue;
  j++;
}
finalstr[10] = '\0';
printf("%s\n",finalstr );

}

int main()
{
  char str[10] = "Hello";
  char str1[10] = "World";

  concate(str, str1);
}
