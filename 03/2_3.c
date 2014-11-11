<<<<<<< HEAD
# Ausgabe aller defiziten Zahlen < n
=======
>>>>>>> 6607221af0f870b87775b49f8a6522958da9f9f1
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

    printf("Gebe alle defizieten Zahlen kleiner n aus.\nBitte gebe eine positive Zahl n ein: ");
    scanf("%d", &n);
    
    for (int i = 1; i < n; i++) {
        int sum = summeTeiler(i);
        
        if (sum < i) { 
            printf("%d\n", i);
        }
    }

    return 0;
}


