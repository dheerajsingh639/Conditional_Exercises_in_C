#include <stdio.h>
int main()
{
    float r, v;
    // float pi = 3.14159;
    printf("enter the radius\n");
    scanf("%f", &r);
    v = (4.0 / 3.0) * 3.14159 * r * r * r;
    printf("%f", v);
    return 0;
}