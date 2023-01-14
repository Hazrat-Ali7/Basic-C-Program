//Problem-5:(Two Side Greather Than Third Side)
#include<stdio.h>
void main()
{
int a,b,c;
printf("Enter The Number=");
scanf("%d %d %d",&a,&b,&c);
if( a>0 && b>0 && c>0)
{
    if(a+c>b)
    printf("Yes");
    else
     printf("No");
}
else printf("No");
    return 0;
}