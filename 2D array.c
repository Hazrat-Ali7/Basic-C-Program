m// 2D Array/ Matrix Program.
#include<stdio.h>
void main()
{
    int i,j;
    int A[3][4] = { {5,6,7,8},{9,10,11,12},{13,14,15,16} };

    for(i=0;i<3;i++)

    {

        for(j=0;j<4;j++)
        {

            printf("%d ",A[i][j]);
        }
        printf("\n");
    }


getch();
}
