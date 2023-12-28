#include <stdio.h>
int main()
{
    float l, w, store;
    printf("Enter the length\n");
    scanf("%f", &l);
    printf("Enter the width\n");
    scanf("%f", &w);
    store = 2 * (l + w);
    printf("%2f", store);
    return 0;
}