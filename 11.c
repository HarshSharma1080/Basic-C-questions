// To check for Armstrong [magic] number.
#include<stdio.h>
#include<math.h>
int main(){
int num,x=0,a=0,num2,num1,num3,num4=1;
printf("enter a number to check if its armstrong number or not: ");
scanf("%d",&num);
num1=num;
num3=num;
do{
    x=num1/10;
    a++;
    num1=x;
}while(x>0);
x=0;
for(int i=1;i<=a;i++){
  num2=num3%10;
  x+=pow(num2,a);
  num3=num3/10;
}
if(x==num){
  printf("\n%d is a armstrong number ",num);
}
else{
  printf("\n%d is not a armstrong number ",num);
}
}
