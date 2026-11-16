#include<stdio.h>
#include<string.h>  
int main(){
char email[100], domain[100];
printf("Enter email address: ");
    scanf("%99s", email);
    char*a=strchr(email,'@');
    if(a=NULL){
        printf("Invalid email address\n");
        return 1;
    }
    strcpy(domain, a + 1);        // everything after '@'
    printf("Domain: %s\n", domain);
    return 0;
}

