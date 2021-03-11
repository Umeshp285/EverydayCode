#include <stdio.h>
int main()
{
    int x = 0,y = 0;
    unsigned int squareSide = 0;
    printf("Enter Side of a Square = ");
    scanf("%u",&squareSide);
    for(x=1; x<=squareSide; ++x)
    {
        for(y=1; y<=squareSide; ++y)
        {
            if((x==1) || (x==squareSide) || (y==1) || (y==squareSide))
            {
                //Print star
                printf("*");
            }
            else
            {
                //Print space
                printf(" ");
            }
        }
        // Print new line
        printf("\n");
    }
    return 0;
}
