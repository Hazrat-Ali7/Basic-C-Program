//WAP define GCD/LCM.
#include<stdio.h>
void main()
{
    int n1,n2,rem,gcd,lcm,num1,num2;
    printf("Enter Two Numbers=");
    scanf("%d %d",&num1,&num2);

    n1 =num1;
    n2 =num2;

    while(n2!=0)
    {
        rem=n1%n2;
        n1=n2;
        n2=rem;
    }


    gcd=n1;
    lcm=(num1*num2)/gcd;

    printf("GCD =%d\n",gcd);
    printf("LCM =%d\n",lcm);

    getch();

}
