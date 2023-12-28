#include<stdio.h>
int main(){
int x,y;
printf("Input the x And Y Cordinate");
scanf("%d %d",&x,&y);

if(x>0 && y>0){

printf("Ist");

}
else if(x<0 && y>0){

    printf("2nd");
}
else if(x<0 && y<0){

    printf("3rd");
}
else{

    printf("4th");
}

return 0;
}