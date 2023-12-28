#include <stdio.h>
int main()
{
    float c, f;
    char num[50];
    printf("Enter centigrade\n");
    scanf("%f", &c);
    f = (c * 9 / 5) + 32;
    printf("Your Fahrenheit is  %f", f);
    return 0;
}