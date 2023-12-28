#include <stdio.h>
int main()
{
    char a;
    printf("Enter a alphabate\n");
    scanf("%c",&a);
    if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
    {
        printf("vowel");
    }
    else
    {
        printf("Constant");
    }
    return 0;
}