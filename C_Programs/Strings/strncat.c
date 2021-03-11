#include<stdio.h>

void strncatt(char *str1 , char *str2 , int n)
{
  int i=0,j;
	while(*(str1+i))
	{
		i++;
	}
	for(j=0;j<n;j++)
	{
		*(str1+i)=*(str2+j);
		i++;
	}
  printf("%s\n",str1 );
}

int main()
{
  char str[20] = "cdac";
  char str1[20] = "hyderabad";

  strncatt(str , str1 , 3 );
}
