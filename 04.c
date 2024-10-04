// To print table of n  5 x 1 = 5
#include<stdio.h>
int main(){
    int num;
    printf("enter a number to print its table: ");
    scanf("%d",&num);
    for(int i=1; i<=10;i++){
        printf("%d x %d = %d \n",num,i,num*i);
    }
}
