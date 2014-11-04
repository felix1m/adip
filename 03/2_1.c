#include <stdio.h>
#include <stdbool.h>


int summeTeiler(int n) {
    
    int sum = 0;
    for (int i = 1; i <= n/2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return sum;
}

int main(int argc, const char * argv[]) {

    int n = 1;

    printf("Test perfekte oder defiziente Zahl:\nBitte gebe eine positive Zahl n ein: ");
    scanf("%d", &n);
    
    int sum = summeTeiler(n);

    printf("Echte Teilersumme ist %d\n", sum);
    
    if (sum == n) printf("Zahl ist vollkommen\n");
    else if (sum < n) printf("Zahl ist defizient\n");

    return 0;
}


