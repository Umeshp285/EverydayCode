#include <stdio.h>
#include<stdlib.h>
int main()
{
    int ch = 0;
    FILE *fp = NULL;
    fp = fopen("aticleworld.txt", "w");
    if(fp == NULL)
    {
        printf("Error in creating the file\n");
        exit(1);
    }
    //Write A to Z in file
    for(ch =65 ; ch <= 90 ; ++ch)
    {
        fputc(ch, fp);
    }
    //close the file
    fclose(fp);
    printf("A t0 Z written to the created file\n");
    return 0;
}
