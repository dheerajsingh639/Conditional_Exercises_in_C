#include<stdio.h>
int main(){
char a[20];
char b[20];
int c;
printf("Enter your name\n");
scanf("%s",&a);
printf("Enter your last name\n");
scanf("%s",&b);
printf("Enter your dob\n");
scanf("%d",&c);
printf("%s %s %d",a,b,c);
return 0;
}