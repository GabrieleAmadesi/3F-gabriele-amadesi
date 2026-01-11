#include <stdio.h>

int main() {
    FILE *f = fopen("numeri.txt", "r");
    int n, min, max;

    fscanf(f, "%d", &n);
    min = max = n;

    while (fscanf(f, "%d", &n) != EOF) {
        if (n < min) min = n;
        if (n > max) max = n;
    }

    fclose(f);
    printf("Differenza: %d\n", max - min);
    return 0;
}

