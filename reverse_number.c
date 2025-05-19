#include <stdio.h>

int main() {
    int n, reversed = 0;

    // Lire un entier depuis l'entrée standard
    scanf("%d", &n);

    int original = n; // Conserver la valeur originale pour savoir si le nombre était négatif

    // Si le nombre est négatif, on travaille avec sa valeur absolue
    if (n < 0) n = -n;

    // Si le nombre est zéro, l'inverse est aussi zéro
    if (n == 0) {
        reversed = 0;
    } else {
        // Boucle pour inverser les chiffres du nombre
        while (n != 0) {
            // Ajouter le dernier chiffre à la droite du nombre inversé
            reversed = reversed * 10 + (n % 10);
            // Retirer le dernier chiffre du nombre original
            n /= 10;
        }
    }

    // Si le nombre original était négatif, remettre le signe négatif
    if (original < 0) reversed = -reversed;

    // Afficher le résultat final
    printf("Nombre inversé : %d\n", reversed);
    fflush(stdout);

    return 0;
}
