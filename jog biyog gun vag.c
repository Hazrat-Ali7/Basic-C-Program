#include<stdio.h>
void main(){

  int num1,num2,result;

  printf("Enter two Number:");
  scanf("%d %d",&num1,&num2);

  result = num1+num2;
  printf("The Sum is =%d\n",result);

  result = num1-num2;
  printf("The Sub is =%d\n",result);

  result = num1*num2;
  printf("The Mul is =%d\n",result);

   result = num1 / num2;
  printf("The Div is =%d\n",result);

  result = num1 %num2;
  printf("The Remainder is =%d\n",result);

getch();

}
