#include <stdio.h>
int main()
 {
    int yr;
   printf("Enter a yr: ");
    scanf("%d", &yr);
    if (yr% 400 == 0)
    {
  printf("%d is a leap yr.\n", yr);
    } 
    else if (yr % 100 == 0)
     {
        printf("%d is not a leap yr.\n", yr);
    } 
    else if (yr % 4 == 0)
     {
        printf("%d is a leap yr.\n", yr);
    }
     else {
        printf("%d is not a leap yr.\n", yr);
    }
}
