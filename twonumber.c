// Write A C Program to Take integers input and Show Who is Bigger(Problem-1)
#include<stdio.h>
void main()
{
 
 int A,B;
 printf("Enter Two Number=");
 scanf("%d %d",&A,&B);
 //Using Condition
if(A>B)
printf("A is Bigger");

else if(B>A)
 printf("B is Bigger");

 else
 printf("Number is Equal");
return 0;

}