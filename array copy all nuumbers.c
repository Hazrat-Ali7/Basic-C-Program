// WAP Program Copy all Elemetnts another An Array.
#include<stdio.h>
void main()
{

    int array1[30],n, array2[30],i;
    printf("How many Numbers : ");
    scanf("%d",&n);
    for(i=0; i<n;i++)
    {
        scanf("%d",&array1[i]);
    }
    printf("Array1: ");
    for(i=0;i<n; i++)
    {
         printf("%d ",array1[i]);

    }

    //copying all the elements from array1 to array2
    for(i=0;i<n;i++)
    {

        array2[i] = array1[i];
    }

    printf("\nArray2 : ");
    for(i=0;i<n;i++)
    {

        printf("%d",array2[i]);
    }


    getch();
}

