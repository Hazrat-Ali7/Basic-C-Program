//Write a C Program to Take three integers as input and show who is bigger.(Problem-2)
#include<stdio.h>
void main()
{
     int A,B,C;
     printf("Enter Three Number=");     
     scanf("%d %d %d",&A,&B,&C);

 // Using Condition.
 if (B>A && B>C)
 printf("B Bigger Number ");

 else if (A>B && A>C)
 printf("A Bigger Number ");

 else if (C>A && C>B)
 printf("C Bigger Number ");

  else
 printf("Numbers Are Equal");
 
 return 0;

}


