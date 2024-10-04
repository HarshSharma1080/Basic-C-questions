// To print sum of first n numbers.
#include<stdio.h>
int main(){
    int num,sum;
    printf("enter a number to print sum till that number: ");
    scanf("%d",&num);
    for(int i; i<=num;i++){
        sum+=i;
    }
    printf("the sum is :%d",sum);
}
