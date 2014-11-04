#include <stdio.h>

int collatz(int a_n) {
    if (a_n % 2) {
        return 3 * a_n + 1;
    } else {
        return a_n / 2;
    }
}


int main() {
    int a_n = 1, length = 1;

    printf("Collanz-Folge: Bitte gebe eine natürliche Zahl a_0 ein: ");
    scanf("%d", &a_n);

    while (length < 3 || a_n > 1) {
        a_n = collatz(a_n);
        length++;
    }

    printf("Länge der Collatz Folge: %d\n", length);
    return 0;
}


