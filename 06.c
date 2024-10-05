// To find exponent.
#include<stdio.h>
int main(){
  int num,expo,ans=1;
  printf("Enter a number to find its power: ");
  scanf("%d",&num);
  printf("\nwhich power do you want to find out: ");
  scanf("%d",&expo);
  for(int i=1;i<=expo;i++){
    ans*=num;
  }
  printf("%d",ans);
  return 0;
}
