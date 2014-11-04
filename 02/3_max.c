#include <stdio.h>

int collatz(int a_0) {
    if (a_0 % 2) {
        return 3 * a_0 + 1;
    } else {
        return a_0 / 2;
    }
}


int main() {
    int a_0 = 1;
    int max_a_0 = 1, max_length = 0;

    while(a_0 < 1000) {
        int a_n = a_0, length = 1;
        while (length < 3 || a_n > 1) {
            a_n = collatz(a_n);
            length++;
        }

        if (length > max_length) {
            max_length = length;
            max_a_0 = a_0;
        }
        printf("DEBUG: a_0=%d, length=%d\n", a_0, length);
        a_0++;
    }


    printf("Längste Collatz Folge bei a_0 = %d, mit Länge %d \n", max_a_0, max_length);
    return 0;
}


