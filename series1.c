//1+2+3+4.....+ N (series sum);
#include<stdio.h>
void main()
{
    int n,i,sum=0;
    printf("Enter the last number of the series=");
    scanf("%d",&n);
    printf("1+2+3+....+%d",n);

    for(i=1;i<=n; i=i+1)

    {
        sum=sum+i; //sum=6

    }

    printf(" = %d\n",sum);

    getch();
}
