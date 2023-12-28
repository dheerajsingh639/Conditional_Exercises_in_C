#include<stdio.h>
int main(){
int a,m,d,s,input1,input2;
printf("Enter the input\n");
scanf("%d",&input1);
printf("Enter thr input\n");
scanf("%d",&input2);
a=input1+input2;
m=input1*input2;
d=input1/input2;
s=input1-input2;
printf("add=%d\n multi=%d\n div=%d\n sub=%d\n",a,m,d,s);
return 0;
}