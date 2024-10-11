// To find Sum of digits of a number.
#include<stdio.h>
int main(){
  int num,x,a=0,val=0;
  printf("enter a number to find the sum of its digits: ");
  scanf("%d",&num);
  do{
    x=num/10;
    num=x;
    a++;
  }while(x<0);
  for(int i=1;i<=a;i++){
    val+=num%10;
    num=num/10;
  }
  printf("%d",val);
}
