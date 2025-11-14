#include<stdio.h>
int main()
{
    float p, t, r, si;

    printf("enter p, t, r: ");
    scanf("%f %f %f", &p, &t, &r);

    si = p * t * r / 100;

    printf("si = %.2f", si);

    return 0;
}
