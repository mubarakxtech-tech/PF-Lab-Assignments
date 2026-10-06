#include<stdio.h>
int main (){
    int pin;
    int sum = 0;
    printf("write a four digit pin:");
    scanf("%d", &pin);
    for(int i=0; i<4; i++){
       int digit = pin % 10;
         pin /= 10;
         sum += digit;
    }
    if(sum>10) printf("\n strong pin");
    else printf("\n weak pin");
    return 0;
}