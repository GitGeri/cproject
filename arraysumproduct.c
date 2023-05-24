#include <stdio.h>

int main() {

    int arr[5];
    int sum = 0;
    int prod = 1;
    printf("5 numbers please: \n");
    for (int i=0; i<5; i++) {
        scanf("%d",&arr[i]);
        sum = sum + arr[i];
        prod = prod * arr[i];
    }
    printf("The sum is: %d \n",sum);
    printf("The product is: %d",prod);


return 0;
}