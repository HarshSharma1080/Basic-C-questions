// To count number of digits of a number.
#include<stdio.h>
int main(){
    float num;
    int val,a=0;
    printf("enter a number to count number of digits in it: ");
    scanf("%f",&num);
    
  do{
      val=num/10;
      a+=1;
      num=val;
  }while(val>0);
  
  printf("%d",a);
}
