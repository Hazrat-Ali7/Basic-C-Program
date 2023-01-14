// WAP a ster program (same).
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

            printf("* " );
        }

        printf(" \n");
    }


     for(row=n-1;row>=1; row--)
    {

        for (col=1;col<=row; col++)
        {

            printf("* ");
        }

        printf(" \n");
    }

    getch();
}
