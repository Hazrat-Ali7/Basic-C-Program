#include<stdio.h>
void main(){
int sum=0,mult=0,n,x,i=1;
float floatSum, floatMult;

printf("Please input the number");
scanf("%d",&x);
printf("maximum nth number");
scanf("%d",&n);

//First Program Solution:
while(i<=n){
    mult=x*i;
    printf("%d*%d=%d\n",x,i,mult);
    sum+=mult;
    i++;
}
printf("Sum of the Total series %d\n\n",sum);

// initial the values
i=1;
sum=0;

//Second Program Solution :
while(i<=n){
    mult=x*i;
    printf("%d*%d=%d\n",i,x,mult);
    sum+=mult;
    i++;
}
printf("Sum of the multiple series %d\n\n",sum);

//initial the value:
i=1;

//Third Program Solution:
while(i<=n){
    floatMult=(float)x*1/i;
    printf("%d*1/%d=%f\n",x,i,floatMult);
    floatSum+=floatMult;
    i++;
}
printf(" Sum of the multiple divide series %.1f\n",floatSum);
getch();


}
