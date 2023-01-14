#include<stdio.h>
void main()
{
   int n,sum=0,a;
   printf("Enter the lust number=");
   scanf("%d",&n);

   printf("1+2+3+......+%d\n",n);

   while(a<=n)
   {
       sum=sum+a;
       a=a+1;

   }
printf(" = %d\n",sum);

getch();

}
