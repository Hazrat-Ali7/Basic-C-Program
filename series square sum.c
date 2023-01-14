// series sum:1^2+2^2+3^2+.......+N^2.
// series sum:1^2+3^2+5^2+.......+N^2.
#include<stdio.h>
void main()
{
   /* int i,n,sum=0;
    printf("Enter n =");
    scanf("%d",&n);

    for  (i=1; i<=n;i++)
        {
         sum=sum+i*i;

        }
    printf("\nSum = %d\n",sum);


getch();*/




    int i,n,sum=0;
    printf("Enter n =");
    scanf("%d",&n);

    for  (i=1; i<=n;i=i+2)
        {
         sum=sum+i*i;

        }
    printf("\nSum = %d\n",sum);


getch();
}
