// WAP program Array Add and Sub.
#include<stdio.h>
void main()
{
    int i,j,numberOfRows,numberOfCols;
    int A[10][10], B[10][10],C[10][10];
    printf("Enter the number of Rows And Cols=");
    scanf("%d %d",&numberOfRows,&numberOfCols);

    //Scanning A Matrix
    printf("Enter elements for A Matrix=\n");
    for(i=0; i<numberOfRows; i++)
    {

        for(j=0; j<numberOfCols; j++)
        {
            printf("A[%d][%d]=",i,j);
            scanf("%d",&A[i][j]);

        }

        printf("\n");

    }


    //Scanning B Matrix
    printf("Enter elements for B Matrix=\n");
    for(i=0; i<numberOfRows; i++)
    {

        for(j=0; j<numberOfCols; j++)
        {
            printf("B[%d][%d]=",i,j);
            scanf("%d",&B[i][j]);

        }

        printf("\n");
    }


    // printing A Matrix.
    printf("A= ");

    for(i=0; i<numberOfRows; i++)
    {
        printf("\t");
        for(j=0; j<numberOfCols; j++)
        {
            printf("%d ",A[i][j]);

        }
        printf("\n");
    }

    // printing B Matrix.
    printf("\nB = ");

    for(i=0; i<numberOfRows; i++)
    {
        printf("\t");
        for(j=0; j<numberOfCols; j++)
        {
            printf("%d ",B[i][j]);

        }
        printf("\n");
    }


    // Adding the Matrix

    for(i=0; i<numberOfRows; i++)
    {

        for(j=0; j<numberOfCols; j++)
        {
             C[i][j] = A [i][j] + B[i][j];
        }

    }

    // printing C Matrix.
     printf("\nA + B = ");

    for(i=0; i<numberOfRows; i++)
    {

        for(j=0; j<numberOfCols; j++)
        {
            printf("%d ",C[i][j]);

        }
        printf("\n");
         printf("\t");
    }


        // Substraction the Matrix

    for(i=0; i<numberOfRows; i++)
    {

        for(j=0; j<numberOfCols; j++)
        {
             C[i][j] = A [i][j] - B[i][j];
        }

    }

    // printing C Matrix.
     printf("\nA - B = ");

    for(i=0; i<numberOfRows; i++)
    {

        for(j=0; j<numberOfCols; j++)
        {
            printf("%d ",C[i][j]);

        }
        printf("\n");
         printf("\t");
    }

    getch();
}
