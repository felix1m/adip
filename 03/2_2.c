# Ausgabe aller vollkommenen Zahlen < n
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

    printf("Gebe alle perfekten Zahlen kleiner n aus.\nBitte gebe eine positive Zahl n ein: ");
    scanf("%d", &n);
    
    for (int i = 1; i < n; i++) {
        int sum = summeTeiler(i);
        
        if (sum == i) { 
            printf("%d\n", i);
        }
    }

    return 0;
}


