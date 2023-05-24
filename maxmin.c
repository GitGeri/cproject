#include <stdio.h>

int main() {
  printf("Enter your numbers: ");
  int n;
  scanf("%d",&n);
  int min = n, max = n;

  for (int i = 1; i <= 9; i++) {
    scanf("%d", &n);
    min = (n < min) ? n : min;
    max = (n > max) ? n : max;
  }
  printf("the maximum: %d and the minimum: %d", max, min);


return 0;
}