//WAP Array to Multiplication.
#include<stdio.h>
void main()
{
    int first [10][10],second[10][10],result[10][10],r1,r2,c1,c2,i,j,k,row,col,sum=0;
    printf("Enter rows and column for first matrix=");
    scanf("%d %d",&r1,&c1);
    printf("Enter rows and column for Second matrix=");
    scanf("%d %d",&r2,&c2);

    while(c1!=r2)
    {

        printf("Error !! column of first matrix not equal to row of second\n=");

        printf("Enter rows and column for first matrix=");
        scanf("%d %d",&r1,&c1);
        printf("Enter rows and column for Second matrix=");
        scanf("%d %d",&r2,&c2);

    }

    // Taking input for First Matrix.
    printf("\n Enter elements for first Matrix=\n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {

            printf("first [%d][%d] = ",i,j);
            scanf("%d",&first[i][j]);
        }
    }


// Taking input for Second Matrix.
    printf("\n Enter elements for Second Matrix=\n");
    for(i=0; i<r2; i++)
    {

        for(j=0; j<c2; j++)
        {
            printf("Second [%d][%d] = ",i,j);
            scanf("%d",&second[i][j]);

        }
    }


    // Multiplying Matrix.

    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {

            for(k=0; k<c1; k++)
            {
                sum = sum + first[i][k] * second[k][j];

            }

            result[i][j] =sum;
            sum=0;
        }

    }

    //Printing First Matrix.
    printf("\n\nFirst Matrix\n");

    for(i=0; i<r1; i++)
    {

        for(j=0; j<c1; j++)
            printf("%d ",first[i][j]);
        printf("\n");
    }



    //Printing Second Matrix.
    printf("\n\nSecond Matrix\n");

    for(i=0; i<r2; i++)
    {
        printf("\t");
        for(j=0; j<c2; j++)
            printf("%d ",second[i][j]);
        printf("\n");
    }


     //Printing Result Matrix.
    printf("\n\nResult Matrix\n");

    for(i=0; i<r1; i++)
    {
        printf("\t");
        for(j=0; j<c2; j++)
            printf("%d ",result[i][j]);
        printf("\n");
    }



    getch();

}
