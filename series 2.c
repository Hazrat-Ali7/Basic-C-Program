//1+3+5+7.....+ N (series sum);
#include<stdio.h>
void main()
{
    int n,i,sum=0;
    printf("Enter the last number of the series=");
    scanf("%d",&n);
    printf("1+3+5+....+%d",n);
    //1+3+5+7+9+11

    for(i=1;i<=n; i=i+2)

    {
        sum=sum+i; //sum=36

    }

    printf(" = %d\n",sum);

    getch();
}

