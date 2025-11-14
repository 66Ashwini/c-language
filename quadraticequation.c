#include <stdio.h>
int main() 
 {  int a, b, c, d;
    printf("Enter the values of a, b, and c: ");
    scanf("%d %d %d", &a, &b, &c);
    d = b * b - 4 * a * c;
    if (d == 0) {
        printf("Roots are real and equal.\n");
    }
    else if (d > 0) {
        printf("Roots are real and distinct.\n");
    }
    else {
        printf("Roots are imaginary.\n");
    }
    return 0;
}

