#include <stdio.h>

int main(int argc, const char * argv[]) {

    int n;
    char prompt[]  = "Bitte gebe eine nicht negative Zahl ein: ";

    printf("Primzahl Test:\n");
    printf(prompt);
    scanf("%d", &n);

    while (n < 0) {
        printf("Fehler: ");
        printf(prompt);
        scanf("%d", &n);
    }

    if (isPrime(n)) {
        printf("Nein, %d ist nicht prim!\n",n);
    } else {
        printf("Ja, %d ist prim!\n",n);
    }

    return 0;
}

bool isPrime (int n) {
    for(int i = 2; i <= n / 2; ++i) {
        if(n % i == 0) {
            return 0;
        }
    }
    return 1;
}

