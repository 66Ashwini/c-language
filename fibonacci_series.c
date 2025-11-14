#include <stdio.h>
int main() {
  int n;
  int first = 0, second = 1, nextTerm; int count = 0;
  printf("Enter n: ");
  scanf("%d", &n);
  while (count < n)
 {
   printf("%d\n", first);
   nextTerm = first + second;
   first = second; 
   second = nextTerm;
   count++;
  }
  return 0;
}

