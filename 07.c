// To find sum of all the odd & Even numbers less than 100.
#include<stdio.h>
int main(){
    int even=0,odd=0;
    char eo;
    printf("even or odd e/o: ");
    scanf("%c",&eo);
    if(eo=='e'){
        for(int i=0;i<=100;i+=2){
        even+=i;
    }
    printf("%d",even);
    }
    else if(eo=='o'){
        for(int i=1;i<=99;i+=2){
        odd+=i;
    }
    printf("%d",odd);
    }
    return 0;
  
}
