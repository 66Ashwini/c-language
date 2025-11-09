#include <stdio.h>

int main() {
    int n, rows;

    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Enter how many rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}
