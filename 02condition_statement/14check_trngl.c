#include <stdio.h>
int main()
{
    int equ, iso, scal;
    printf("Enter 1st trngl side\n");
    scanf("%d", &equ);
    printf("Enter 2nd trngl side\n");
    scanf("%d", &iso);
    printf("Enter 3rd trngl side\n");
    scanf("%d", &scal);

    if (equ == iso && equ == scal && scal == iso)
    {
        printf("Equilateral traingle");
    }

    else if (equ == iso && equ != scal && scal != iso)
    {
        printf("Isosceles traingle");
    }

    else if (equ != iso && equ != scal && iso != scal)
    {
        printf("Scalene traingle");
    }

    else
    {
        printf("invalid");
    }

    return 0;
}