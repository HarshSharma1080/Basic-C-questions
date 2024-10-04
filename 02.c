//  To print all possible prime numbers starting from 0 to N. 
#include<stdio.h>
int main(){
    int num,a,x=0;
    printf("enter a number to print all the prime numbers till that number: ");
    scanf("%d",&num);
    for(int i=2;i<=num;i++){
        for(a=2;a<i;a++){  // removed  " = " in  a<=i     
            if(i%a!=0){
                x--;
            }
               }
        if (x<=1){
            printf("%d\n",i);//prime number
        }
    } 
    return 0;
}
