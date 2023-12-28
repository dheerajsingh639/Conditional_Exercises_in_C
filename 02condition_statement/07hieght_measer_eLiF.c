#include <stdio.h>
int main()
{
    int h;
    printf("Enter the hieght\n");
    scanf("%d", &h);
    if (h < 150)
    {
        printf("you are draft person");
    }
    
    else if (h >= 150 && h < 160)
    {
        printf("better height but you are not eligible for army");
    }

    else if (h >= 160 && h < 170)
    {
        printf(" perfect height you are eligible for army");
    }
    else if (h >= 170 && h < 180)
    {
        printf(" great you are taller and eligible for army");
    }

    else
    {
        printf("you are taller person");
    }
    return 0;
}