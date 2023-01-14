//pattern same charater c program.
#include<stdio.h>
void main()
{
    int n,row,col;
    printf("Enter N=");
    scanf("%d",&n);

    for(row=1;row<=n; row++)
    {

        for (col=1;col<=row; col++)
        {

            printf("%c ",row+64);   //small letter-col+96.
        }

        printf("\n");
    }

    getch();
}
