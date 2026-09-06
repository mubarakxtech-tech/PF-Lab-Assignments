#include<stdio.h>
int main() {
	char name[20];
	char city[20];
	int age;
printf("\nenter your name: ");
scanf(" %19[^\n]",name);
printf("\nenter your city: ");
scanf(" %19[^\n]",city);
printf("\nenter your age : ");
scanf("%d",&age);
printf("\n\n\t\t\t Your name is :%s",name);
printf("\n\n\t\t\t Your city is :%s",city);
printf("\n\n\t\t\t your age is :%d",age);
return 0;

}