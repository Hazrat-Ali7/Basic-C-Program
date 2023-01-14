//Problem:6(X and Y print Yes And No (Qna Tricks))
#include<stdio.h>
int main()
{
int X,Y;
printf("Enter the Number=");
scanf("%d %d",&X,&Y);

if((X>0 && Y>0) && (X+Y>=100))
printf("Yes");
else 
printf("No");
    return 0;
}