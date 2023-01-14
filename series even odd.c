//series 1+2+3+...+n.
//series 1+3+5+.....+n.
//series 2+4+6+......+n.
//series 1+4+7+.......+n.

#include<stdio.h>
void main()
{
    int i,n,sum=0;
    printf("Enter n =");
    scanf("%d",&n);

    for  (i=1; i<=n;i++)
        {
         sum=sum+i;

        }
    printf("\nSum = %d\n",sum);

getch();

}



