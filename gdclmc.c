#include <stdio.h>

int main() {
    int n1, n2;
    printf("Enter two numbers: ");
    scanf("%d %d",&n1,&n2);

    int gdc, lmc, temp = 0;
    int min=n1, max=n1;
    min = (n2 < min) ? n2 : min;
    max = (n2 > max) ? n2 : max;
    
    for (int i = 1; i <= max/2; i++) {
        if ((n1%i == 0) && (n2%i == 0)) {
            gdc = i;
        }
    }

    for (int i = 1; i <= max; i++) {
        temp = i*min;
        if (temp%max==0) {
            lmc = i*min;
            break;
        }
    }
    printf("GDC %d \n", gdc);
    printf("LMC %d", lmc);


return 0;
}