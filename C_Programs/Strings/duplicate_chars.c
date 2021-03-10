#include<stdio.h>
#include<string.h>

void remove_duplis(char *str)
{
  int len = strlen(str);
  int size = sizeof(str) / sizeof(str[0]);
  printf("%d %d" , len , size);

  char buff[10];
  int count = 0;

  for(int i = 0 ; i<size ; i++)
  {
    for(int j = 0 ; j<i ; j++)
    {
      if(str[i] == str[j]){
          break;
      }

      if(j == i){
      str[count++] = str[i];

    }
    }
  }
  printf("%s\n",buff);
}

int main()
{
  char *str = "helloWorld";
  remove_duplis(str);
}
