// To find Factorial of a number.
#include<stdio.h>
int main(){
    int num,factorial=1;
    printf("enter a number to print its factorial: ");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        factorial*=i;
    }
    printf("%d",factorial);
}
