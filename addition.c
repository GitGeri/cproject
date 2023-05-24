#include <stdio.h>

int main() {
    int n = 0;
    int sum = 0;
    while (sum <= 100) {
      printf("Enter the number: ");
      scanf("%d",&n);
      sum = sum + n;
    }
    
    printf("Done");

    


return 0;
}