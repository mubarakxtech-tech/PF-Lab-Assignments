#include<stdio.h>
int main(){
    int n;
    printf("enter the value of n for catalan numbers:\n");
    scanf("%d", &n);
    if(n<0){
        printf("catalan numbers are not defined for negative numbers\n");
    }
    else{
        unsigned long long int catalan =1;
        for (int i=0; i<n; i++){
            catalan = catalan * (2 * (2 * i + 1)) / (i + 2);
            if(i==0){
                catalan = 1;
            }
        }
        printf("catalan number %d: %llu\n", n, catalan);
    }
    return 0;
}