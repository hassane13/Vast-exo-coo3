#include <stdio.h>

int main() {
    int n, original, count = 0;

    // Lire un entier depuis l'entrée standard
    scanf("%d", &n);
    // Conserver la valeur originale de n pour l'affichage final
    original = n;

    // Si le nombre est zéro, il contient un chiffre
    if (n == 0) {
        count = 1;
    } else {
        // Si le nombre est négatif, le rendre positif pour compter les chiffres
        if (n < 0) {
            n = -n;
        }
        // Compter le nombre de chiffres en divisant le nombre par 10 jusqu'à zéro
        while (n != 0) {
            n /= 10;
            count++;
        }
    }

    // Afficher le résultat : combien de chiffres contient le nombre original
    printf("%dcontient %dchiffre(s).\n", original, count);

    return 0;
}
