//1.5+2.5+3.5+....+N
#include<stdio.h>
void main()
{

 float i,n,sum=0;
    printf("Enter n =");
    scanf("%f",&n);

    for  (i=1.5; i<=n; i++)
        {
         sum=sum+i;

        }
    printf("Sum = %.1f\n",sum);


    getch();
}
