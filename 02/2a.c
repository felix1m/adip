#include <stdio.h>


int main() {
    float a = 1, prod = 1;
    int n = 1;

    printf("Produkte:\nBitte gebe eine rationale Zahl a ein: ");
    scanf("%f", &a);

    printf("Bitte gebe eine natürliche Zahl n ein: ");
    scanf("%d", &n);


    for (int i = 1; i <= n; i++) {
        prod *= a;
    }

    printf("Produkte von 1 bis n: %f\n", prod);
    return 0;
}
