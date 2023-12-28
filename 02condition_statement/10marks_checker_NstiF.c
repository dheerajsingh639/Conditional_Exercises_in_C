#include<stdio.h>
int main(){
printf("Admission Checker\n");
int maths,phy,chem,total_marks;
printf("Enter the maths marks\n");
scanf("%d",&maths);
printf("Enter the phy marks\n");
scanf("%d",&phy);
printf("Enter the chem marks\n");
scanf("%d",&chem);

if (maths>=65 && phy>=55 && chem>=50)
{
     if(maths+phy+chem>=190 || maths+phy>=140){
        printf("The candidate is eligible for admission.\n");
     }
     else{
          printf("Sorry Better Luck for next time");
     }
}

else{
    printf("Invalid Marks For Taking The Addmission");

}
    


return 0;
}