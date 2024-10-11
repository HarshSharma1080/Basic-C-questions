// To check for perfect number.
#include<stdio.h>
int main(){
  int num,val,sum=0;
  printf("enter a number a check if its perfect number or not: ");
  scanf("%d",&num);
  for(int i=1;i<num;i++){
    if(num%i==0){
      sum+=i;
    }
  }
  if(sum==num){
    printf("%d is a perfect number ",num);
  }
  else{
    printf("%d is not a perfect number ",num);
  }
  return 0;
}
