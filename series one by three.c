// 1+1/2+1/3+.....+1/N.
#include<stdio.h>
void main()
{
    double sum=0,n,i;
    printf("Enter the Number=");
    scanf("%lf",&n);

    for (i=1; i<=n; i++)
    {

        sum=sum+(1/i);
        if(i==1)
            printf("\n1 +");
        else if(i==n)
            printf("(1/%lf)",i);
        else
            printf("(1/%lf)+",i);


    }

    printf("=%.0lf\n",sum);

}
