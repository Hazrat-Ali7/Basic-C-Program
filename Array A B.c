// WAP program Define A B matrix.
#include<stdio.h>
void main()
{
    int i,j;
    int A[3][4], B[3][4];
    //Scanning A Matrix
    printf("Enter elements for A Matrix=\n");
    for(i=0;i<3;i++)
    {

        for(j=0;j<4;j++)
        {
            printf("A[%d][%d]=",i,j);
            scanf("%d",&A[i][j]);

        }

        printf("\n");
    }
    // printing A Matrix.
    printf("A= ");

    for(i=0;i<3;i++)
    {
        printf("\t");
        for(j=0;j<4;j++)
        {
            printf("%d ",A[i][j]);

        }
        printf("\n");
    }

     //Scanning B Matrix
    printf("Enter elements for B Matrix=\n");
    for(i=0;i<3;i++)
    {

        for(j=0;j<4;j++)
        {
            printf("B[%d][%d]=",i,j);
            scanf("%d",&B[i][j]);

        }

        printf("\n");
    }
    // printing B Matrix.
    printf("B= ");

    for(i=0;i<3;i++)
    {
        printf("\t");
        for(j=0;j<4;j++)
        {
            printf("%d ",B[i][j]);

        }
        printf("\n");
    }

}
