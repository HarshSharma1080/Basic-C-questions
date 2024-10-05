// To find sum of all the odd & Even numbers less than 100.
#include<stdio.h>
int main(){
    int even=0,odd=0;
    char even_odd;
    printf("even or odd e/o: ");
    scanf("%c",&even_odd);
    if(even_odd=='E' || even_odd=='e'){
        for(int i=0;i<=100;i+=2){
        even+=i;
    }
    printf("%d",even);
    }
    else if(even_odd=='O' || even_odd=='o'){
        for(int i=1;i<=99;i+=2){
        odd+=i;
    }
    printf("%d",odd);
    }
    return 0;
  
}
