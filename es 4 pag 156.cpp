#include <stdio.h>

int main() {
    FILE *f = fopen("voti.txt", "r");
    int v;
    int maxSuff = -1;
    int minInsuff = 11;

    while (fscanf(f, "%d", &v) != EOF) {
        if (v >= 6 && v > maxSuff)
            maxSuff = v;
        if (v < 6 && v < minInsuff)
            minInsuff = v;
    }

    fclose(f);
    printf("Max sufficienze: %d\n", maxSuff);
    printf("Min insufficienze: %d\n", minInsuff);
    return 0;
}

