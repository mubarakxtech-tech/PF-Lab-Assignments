#include<stdio.h>
#include<string.h>
#define N 10
int main(){
char name[N][50];
char temp[50];
printf("Enter %d student names:\n", N);
for (int i=0;i<N;i++){
    fgets(name[i],50,stdin);
    name[i][strcspn(name[i], "\n")]="\0";
}
{
for(int i=0;i<N-1;i++){
    int swap=0;
    for(int j=0;j<N-1;j++){
        if(strcmp(name[j],name[j+1])>0){
            strcpy(temp,name[j]);
            strcpy(name[j],name[j+1]);
            strcpy(name[j+1],temp);
            swap=1;
        }
    }
    if(swap==0) break;
}
  printf("\nSorted roster (A to Z):\n");
    for (int i = 0; i < N; i++)
        printf("%2d. %s\n", i + 1, name[i]);
    
}
return 0;
}


