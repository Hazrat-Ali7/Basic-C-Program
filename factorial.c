//factorial c program.
#include<stdio.h>
void main()
{

    int i,fact=1,n;
    printf("Enter Any Positive Number=");
    scanf("%d",&n);

    for(i=1;i<=n; i++)
    {

        fact=fact*i; //fact=1.

    }
    printf("%d\n",fact);

    getch();
}
