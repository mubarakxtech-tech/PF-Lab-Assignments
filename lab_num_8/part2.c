#include<stdio.h>
#include<string.h>
void reversestring(char str[],int right,int left) {
if(left<right) {
    char temp = str[left];
    str[left] = str[right];
    str[right] = temp;
    reversestring(str, right - 1, left + 1);
}
}

char *stringrev(char str[]) {
    int s = strlen(str);
     reverseHelper(s, 0, (int)strlen(s) - 1);
    return str;
}
int main(){
    printf("Enter a string: ");
    char str[100];
    fgets(str, sizeof(str),stdin);  
    str[strcspn(str, "\n")] = '\0';  // Remove newline character
    printf("Reversed: %s\n", stringrev(str));
    return 0;
}
