#include <stdio.h>
int main()
{
    int age;
    printf("enter age\n");
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("Your are eligable for vote");
    }
    else
    {
        printf("you are not eligible for vote");
    }

    return 0;
}