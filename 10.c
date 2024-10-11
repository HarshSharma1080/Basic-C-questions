// To find Sum of digits of a number.
#include<stdio.h>
int main(){
  int num,val=0;
  printf("enter a number to find the sum of its digits: ");
  scanf("%d",&num);
  while(num>0){
    val+=num%10;
    num=num/10;
}
printf("\nthe sum is %d",val);
}

