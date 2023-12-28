#include<stdio.h>
int main(){

   int a,b,c,key;
   printf("Input the First And Second nUmber");
   scanf("%d %d",&a,&b);
   printf("choose Your Inputs\n1.add\n2.subtarct\n3.multiply\n4.divided");
   scanf("%d",&key);
   switch (key)
   {
   case 1:
    c=a+b;
    printf("Sum is=%d",c);
    break;
     case 2:
    c=a-b;
    printf("Sub is=%d",c);
    break;
    case 3:
    c=a*b;
    printf("multiply is=%d",c);
    break;
    case 4:

    if(b>0){
    c=a/b;
    printf("Divided is=%d",c);
    }else{

        printf("You Can not Divided By zero");
    }
    break;
   
   default:

   printf("Invalid Input");
    break;
   }









return 0;
}