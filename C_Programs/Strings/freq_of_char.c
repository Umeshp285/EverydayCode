#include<stdio.h>
#include<string.h>

char freq_of_char(char *str , char ch)
{
  int freq = 0;
  for(int i = 0; str[i] != '\0'; i++ )    //for(int i =9 ; i < strlen(str) ; i++)
     {
      if(str[i] == ch)
      {
        freq++;
      }
    }
    printf("Freq of %c in %s is %d\n",ch , str , freq);
}


int main()
{                                  // char st[10]; char ch;
  char *str = "Hello woerede";    // printf("Enter string: \n");
  char ch = 'e';                   //scanf("%s",st);
  freq_of_char(str , ch);             // printf("String = %s\n", st);
                                    //printf("Enter a word :\n");
                                      //scanf("%c",&c);
}
