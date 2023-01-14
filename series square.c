//1^2*2^2*3^2*.......*n^2.  (series similar mutipication)
//1^2*3^2*5^2*.......*n^2. (series odd square)
//2^2*4^2*6^2*.......*n^2.  (series even square)
#include<stdio.h>
void main()
{

    int n,i,result=1;
    printf("Enter n=");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {

        result=result*i*i;
    }
    printf("%d\n",result);

    getch();

}



