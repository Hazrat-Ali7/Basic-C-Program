//1*2 + 2*3 + 3*4+........+n1*n2.
#include<stdio.h>
void main()
{
    int n1,n2,sum=0,a=1,b=2;

    printf("Enter n1 and n2=");
    scanf("%d %d",&n1,&n2);

    printf("1.2+2.3+3.4+......+%d.%d",n1,n2);

    while(a<=n1 && b<=n2)
    {

        sum =sum +a*b; // 1.2+2.3+3.4+4.5=40;
        a= a+1;
        b= b+1;

    }

    printf("= %d\n",sum);

    getch();
}
