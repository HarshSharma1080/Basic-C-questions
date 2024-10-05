// To find exponent.
#include<stdio.h>
int main(){
  int num,expo,ans;
  printf("Enter a number to find its power: ");
  scanf("%",&num);
  printf("which power do you want to find out: ");
  scanf("%d",&expo);
  for(int i;i<=expo;i++){
    ans*=num;
  }
  printf("%d",ans);
}
