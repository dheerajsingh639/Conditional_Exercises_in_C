#include <stdio.h>
#include <ctype.h>
int main()
{
    char data;
    //int num;
    printf("Enter data\n");
    scanf("%c", &data);

    if ((data >= 'a' && data <= 'z') || (data >= 'A' && data <= 'Z'))
    {
        if (isupper(data))
        {
            printf("The alphabet is Upper");
        }
        else
        {
            printf("The alphabet is Lower");
        }
    }

    // else if (data >= 0 && data <= 9)
    // {
    //     if (isdigit(data))
    //     {
    //         printf("Data is a digit");
    //     }
    //     else{
    //         printf("Data is not a digit");
    //     }
    // }

    else
    {
        printf("Data is special character");
    }

    return 0;
}