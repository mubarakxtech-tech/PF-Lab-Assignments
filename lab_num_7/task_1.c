#include<stdio.h>
#include<string.h>
int main(){
    char feed_back[50];
    char updated[100];
    char *ptr;
    printf("enter a customer review");
    for(int i=0;i<49;i++){
fgets(feed_back[i],50,stdin);
    }
    printf("%lu is the total no of characters present in given string :",strlen(feed_back));
    char good[10]={"good"};
    char bad[10]={"bad"};
    
    int hasGood = (strstr(feed_back, "good") != NULL);
    int hasBad  = (strstr(feed_back, "bad")  != NULL);

    if (hasBad && hasGood)  printf("Sentiment: Mixed\n");
    else if (hasBad)        printf("Sentiment: Negative\n");
    else if (hasGood)       printf("Sentiment: Positive\n");
    else      printf("Sentiment: Neutral\n");
        char *remaining = feed_back;
        updated[0] = '\0';
        while ((ptr = strstr(remaining, "bad")) != NULL) {
            strncat(updated, remaining, ptr - remaining);   // text before "bad"
            strcat(updated, "not good");        // replacement
                remaining = ptr + 3;                      // skip "bad"
        }
        strcat(updated, remaining);                  // remaining text
        strcpy(feed_back, updated);
        printf("Updated review: %s\n", feed_back);
    return 0;
    
}