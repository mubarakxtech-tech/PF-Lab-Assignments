#include<stdio.h>
int main() {
    int num,rev=0,temp;
    printf("enter the number of tickets  to reverse:\n");
    scanf("%d", &num);
    temp = num;
        while(temp != 0){
            rev = rev * 10 + temp % 10;
            temp /= 10;
        }
    
    printf("reversed number of tickets : %d\n", rev);
    return 0;
}