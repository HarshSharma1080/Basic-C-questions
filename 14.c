//To check for a prime number
#include <stdio.h>
void main() {
    int num,a=0;
    printf("enter the number to check if it is prime or not: ");
    scanf("%d",&num);
    for(int i=1;i<num;i++){
        if(num%i==0){
            a++;
        }
    }
    if (num == 1){
        printf("%d is neither prime nor composite",num);
    }
    else if(a==0){
        printf("%d is neither prime nor composite",num);
    }
    else if(a>1){
        printf("%d is not a prime number",num);
    }
  
    else{
        printf("%d is a prime number",num);
    }
}
