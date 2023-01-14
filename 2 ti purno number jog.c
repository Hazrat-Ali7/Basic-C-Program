// WAP c Program Number.
#include<stdio.h>
void main()
{
    int n,row,col;
    printf("Enter N=");
    scanf("%d",&n);

    // using looping

    for(row=1;row<=n; row++)
    {
        //printing space.

        for (col=1;col<=n-row; col++)
        {
            printf(" ");
        }

        //printing number.
          for (col=1;col<=row; col++)
        {
            printf("% d",col);
        }
        printf("\n");
    }


    getch();
}
