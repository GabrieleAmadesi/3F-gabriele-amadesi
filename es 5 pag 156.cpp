#include <stdio.h>

int main() {
    int N, a, b;
    float media, maxMedia = -1;
    int maxA, maxB;

    printf("Inserisci N: ");
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d %d", &a, &b);
        media = (a + b) / 2.0;

        if (media > maxMedia) {
            maxMedia = media;
            maxA = a;
            maxB = b;
        }
	}

    printf("Coppia con media maggiore: %d %d\n", maxA, maxB);
    return 0;
}

