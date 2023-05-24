#include <stdio.h>


int main() {
    int n=0;
    
    printf("Enter your nmuber:");
    scanf("%d",&n);
    printf("Diverdes of %d : \n", n);
    printf("1 ");
    for (int i=2; i<= n/2; i++) {
        if (n % i == 0){
            printf("%d ", i);
        }
    }
    printf("%d", n);

return 0;

}