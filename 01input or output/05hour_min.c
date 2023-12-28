#include <stdio.h>
int main()
{
    float h, m, store;
    printf("Enter the hours \n");
    scanf("%f", &h);
    printf("Enter the minutes\n");
    scanf("%f", &m);
    store=(h*60)+m;
    printf("%f",store);
    return 0;
}