#include <stdio.h>

int main() {
    int n, reversed = 0;

    // Lire un entier depuis l'entrée standard
    scanf("%d", &n);

    int negatif = 0;
    // Vérifier si le nombre est négatif
    if (n < 0) {
        negatif = 1;  // Marquer que le nombre est négatif
        n = -n;       // Travailler avec la valeur absolue pour l'inversion
    }

    // Boucle pour inverser les chiffres du nombre
    while (n != 0) {
        reversed = reversed * 10 + (n % 10); // Ajouter le dernier chiffre à reversed
        n /= 10;                             // Retirer le dernier chiffre du nombre
    }

    // Si le nombre était négatif, remettre le signe négatif
    if (negatif) {
        reversed = -reversed;
    }

    // Afficher le nombre inversé avec un message formaté
    printf("Nombre inversé : %d\n", reversed);

    return 0;
}
