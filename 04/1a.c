#include <stdio.h>

double square(double n) { return n*n;}

double potenz(double a, int n) {
    if (!n) return 1;

    return a*potenz(a, n-1);
}

int main() {
    float a = 1;
    int n = 1;

    printf("Produkte:\nBitte gebe eine rationale Zahl a ein: ");
    scanf("%f", &a);

    printf("Bitte gebe eine natürliche Zahl n ein: ");
    scanf("%d", &n);

    printf("a^n: %f\n", potenz(a, n));
    return 0;
}
