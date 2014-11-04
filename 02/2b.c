#include <stdio.h>


int main() {
    float a = 1, prod = 1;
    int n = 1;

    printf("Produkte:\nBitte gebe eine rationale Zahl a ein: ");
    scanf("%f", &a);

    printf("Bitte gebe eine natürliche Zahl n ein: ");
    scanf("%d", &n);

    if (n) {
        int max_loop = n / 2; //works bc int 3/2=1 == 2/2=1

        for (int i = 1; i <= max_loop; i++) {
            prod *= a;
        }
        prod *= prod;

        if (n % 2) {
            prod *= a;
        }
    }


    printf("Produkte von 1 bis n: %f\n", prod);
    return 0;
}
