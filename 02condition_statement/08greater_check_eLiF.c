#include<stdio.h>
int main(){
int a,b,c;
printf("Enter the num\n");
scanf("%d",&a);
printf("Enter the num\n");
scanf("%d",&b);
printf("Enter the num\n");
scanf("%d",&c);
if (a>b && a>c)
{
    printf("a is greater b and C");
}
else if(b>a && b>c)
{
    printf("b is grater then C  and A");
}

else{
printf("c is garter then A ANd B");
}

return 0;
}