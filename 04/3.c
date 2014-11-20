#include <stdio.h>
#include <stdlib.h>

// A has size i x j, B has size k x l and j==k
double** mat_multiply(double** a, double** b, int i, int j, int k, int l) {
    if (j != k) {
        printf("mat_multiply::j != k !! Can't multiply like this\n");
        return NULL;
    }

    double** c;

    if (( c = ( double** )malloc( i * sizeof( double* ))) == NULL ) {
        /* error */
    }

    for (int x = 0; x < i; x++ )
    {
        if (( c[x] = ( double* )malloc( l * sizeof( double ) )) == NULL ) {
            /* error */
        }

        for (int y = 0; y < l; y++ )
        {
            double sum = 0;
            for (int z = 1; z < k; z++ ) {
                sum += a[x][z] * b[z][y];
            }

            c[x][y] = sum;
        }
    }
    return c;
}

int main() {

    int i=3, j=3, k=3, l=3;


    double** c = mat_multiply(a , b, i, j, k, l);

    if (c == NULL) {
        return 1;
    } else {
        printf("Worked!");
    }

    return 0;
}
