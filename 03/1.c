#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n) {
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

void printFactors(int n) {

    printf("Faktoren sind:\n");
    if (n == 1) {
        printf("1\n");
        return;
    }

    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            while (!(n % i)) {
                printf("%d\n", i);
                n /= i;
            }
        }
    }
}

int main(int argc, const char * argv[]) {

    int n = 1;

    printf("Primfaktorzerlegung :\nBitte gebe eine positive Zahl n ein: ");
    scanf("%d", &n);

    printFactors(n);

    return 0;
}


