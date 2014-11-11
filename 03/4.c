#include <stdio.h>


double square(double a) {
    return a*a;
}

double mittelwert(double a[], int n) {
    double sum = 0;

    for (int i = 0; i < n; i++) {
        sum += a[i];
    }

    return sum / n;
}

double varianz(double a[], int n) {
    double sum = 0;
    double mw = mittelwert(a, n);

    for (int i = 0; i < n; i++) {
        sum += square(a[i] - mw);
    }

    return sum / (n - 1);
}

int main() {
    int n = 1;

    printf("Produkte:\nBitte gebe Groesse der Stichprobe (n) ein: ");
    scanf("%d", &n);

    printf("\n Gebe die Stichprobe ein:\n");
    double stichprobe[n];
    for(int i = 0; i < n; i ++)
    {
      printf("%2d> ",i+1);
      scanf("%lf", &stichprobe[i]);
    }

    printf("\nMittelwert: %lf, Varianz: %lf\n", mittelwert(stichprobe, n), varianz(stichprobe, n));

    return 0;
}
