#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // finding greatest
    int greatest = a;
    if (b > greatest)
        greatest = b;
    if (c > greatest)
        greatest = c;

    // finding smallest
    int smallest = a;
    if (b < smallest)
        smallest = b;
    if (c < smallest)
        smallest = c;

    printf("Greatest = %d\n", greatest);
    printf("Smallest = %d\n", smallest);

    return 0;
}

