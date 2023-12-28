#include <stdio.h>
int main()
{
    int tem;
    printf("Enter the temprature\n");
    scanf("%d",&tem);

    if (tem < 0)
    {
        printf("Freezing weather\n");
    }
    else if (tem >= 0 && tem < 10)
    {
        printf("very cold\n");
    }
    else if (tem >= 10 && tem < 20)
    {
        printf("normal tem\n");
    }
    else if (tem >= 20 && tem < 30)
    {
        printf("it's hot");
    }
    else
    {
        printf("it's very hot");
    }
    return 0;
}