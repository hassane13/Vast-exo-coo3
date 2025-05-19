#include <stdio.h>

int main() {
    int n, reversed = 0;

    // Lire un entier depuis l'entrée standard
    if (scanf("%d", &n) != 1) {
        // En cas d'erreur de saisie, on termine le programme avec un code d'erreur
        return 1;
    }

    int original = n;  // Sauvegarder la valeur originale pour gérer le signe plus tard

    // Si le nombre est négatif, on travaille avec sa valeur absolue
    if (n < 0) {
        n = -n;
    }

    // Boucle pour inverser les chiffres du nombre
    while (n != 0) {
        // Extraire le dernier chiffre de n
        int digit = n % 10;

        // Ajouter ce chiffre à la fin du nombre inversé
        reversed = reversed * 10 + digit;

        // Retirer le dernier chiffre de n
        n /= 10;
    }

    // Remettre le signe négatif si le nombre original était négatif
    if (original < 0) {
        reversed = -reversed;
    }

    // Afficher le résultat final avec le texte demandé
    printf("Nombre inversé : %d\n", reversed);

    return 0;
}
