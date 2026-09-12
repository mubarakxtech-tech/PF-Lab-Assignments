#include<stdio.h>
int main()
{
    int score;
    printf("enter your confidence score:");
    scanf("%d",&score);
    if (score<=0 || score>100)
    { 
        printf("invalid score");
    }
else if (score<=49)
{
    printf("you are confident is low");
}
else if (score<=79)
printf("you are confident is moderate");
else
{
    printf("you are confident is high");

}
return 0;
}