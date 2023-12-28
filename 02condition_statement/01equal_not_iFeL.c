#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the 1num\n");
    scanf("%d", &a);
    printf("Enter the 2num\n");
    scanf("%d", &b);

    if (a == b)
    {
        printf("1num & 2num is equal");
    }
    else
    {
        printf("1num & 2num is not equal");
    }
    return 0;
}