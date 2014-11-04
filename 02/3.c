#include <stdio.h>


int main() {
    int a_n = 1, length = 0;

    printf("Produkte:\nBitte gebe eine rationale Zahl a ein: ");
    scanf("%f", &a);

    printf("Bitte gebe eine natürliche Zahl a_n ein: ");
    scanf("%d", &n);

    while (a_n < 2) {
        a_n = collatz(a_n);
        length++;
    }

    printf("Länge der Collatz Folge: %d\n", length);
    return 0;
}


int collatz(int a_n) {
    if (a_n % 2) {
        return 3 * a_n + 1;
    } else {
        return a_n / 2;
    }
}
