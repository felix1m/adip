#include <stdio.h>

int main(int argc, const char * argv[]) {

    int n = 1, sum = 0;

    printf("Summe:\nBitte gebe eine positive Zahl n ein: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    printf("Summe von 1 bis n: %d\n", sum);
    return 0;
}

