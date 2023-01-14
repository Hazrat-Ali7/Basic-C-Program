// The Largest number Among three Numbers
#include<stdio.h>
void main()
{
     int a,b,c;
     printf("Enter Three Number=");     
     scanf("%d %d %d",&a,&b,&c);

 // Using Condition.
 if (a>b && a>c)
 printf("Large Number is=%d\n",a);

 else if (b>a && b>c)
 printf("Large Number is=%d\n",b);

 else if (c>a && c>b)
 printf("Large Number is=%d\n",c);

  else
 printf("Numbers Are Equal");
 
 return 0;

}