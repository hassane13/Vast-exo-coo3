#include <stdio.h>

int main() {
    int n, original, count = 0;

    printf("Entrez un entier : ");
    scanf("%d", &n);

    original = n;

    // Gérer le cas où le nombre est 0
    if (n == 0) {
        count = 1;
    } else {
        // Utiliser la valeur absolue pour gérer les entiers négatifs
        if (n < 0) {
            n = -n;
        }
        while (n != 0) {
            n /= 10;
            count++;
        }
    }

    printf("%d contient %d chiffre(s).\n", original, count);

    return 0;
}
