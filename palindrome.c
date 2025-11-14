#include <stdio.h>
int main()
{  int n, reverse = 0, remainder, temporary;
    printf("enter a number: ");
    scanf("%d", &n);
    temporary = n;
    while (n != 0)
    {
        remainder = n % 10;
        reverse = (reverse * 10) + remainder;
        n = n / 10;
    }
    printf("\nreverse is %d", reverse);
    if (reverse == temporary)
    {
        printf("\n%d is palindrome", temporary);
    }
    else
    {
        printf("\n%d isn't palindrome", temporary);
    }
    return 0;
}
