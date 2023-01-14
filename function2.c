#include<stdio.h>

int my_gcd(int x,int y)
{
    int i;


     for(i=x; i>=1; i--)
      {
       if(x%i==0 && y%i==0)
        {
           return i;


      }
}
}

int main()
{
   int a,b,ans,i;
   scanf("%d %d",&a,&b);
   ans = my_gcd(a,b);
     /* for(i=a; i>=1; i--)
      {
       if(a%i==0 && b%i==0)
        {
            ans=i;
          break;

      }
        */
printf("The GCD is %d\n",ans);


return 0;
}

