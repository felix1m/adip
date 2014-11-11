#include <stdio.h>

double square(double n) { return n*n;}

double potenz(double a, int n) {
    if (!n) return 1;

    if (n % 2) {
        return a * square(potenz(a, (n-1) / 2));
    } else {
        return square(potenz(a, n / 2));
    }
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
