#include<stdio.h>
void main()
{

int x,a,b,s=0;
printf("Enter the numbers=");
scanf("%d %d %d",&x,&a,&b);


if(x%2==0)
{
    s=a+b;
    printf("Number is=%d\n",s);
}

else 
{
    s=a-b;
     printf("Number is=%d\n",s);
}

 return 0;

}