#include <stdio.h>

int main() {
    int n, reversed = 0;

    // Lire un entier depuis l'entrée standard
    if (scanf("%d", &n) != 1) return 1;

    int original = n;

    if (n < 0) n = -n; // Travailler sur la valeur absolue

    while (n != 0) {
        reversed = reversed * 10 + (n % 10);
        n /= 10;
    }

    if (original < 0) reversed = -reversed; // Remettre le signe

    printf("Nombre inversé : %d\n", reversed);

    return 0;
}
