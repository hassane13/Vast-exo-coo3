#include <stdio.h>

int main() {
    int n, reversed = 0;

    // Lire un entier depuis l'entrée standard
    if (scanf("%d", &n) != 1) {
        // En cas d'erreur de saisie, on termine le programme
        return 1;
    }

    int original = n;  // Sauvegarder la valeur originale pour gérer le signe

    // Travailler sur la valeur absolue pour inverser les chiffres
    if (n < 0) {
        n = -n;
    }

    // Inverser les chiffres du nombre
    while (n != 0) {
        reversed = reversed * 10 + (n % 10);
        n /= 10;
    }

    // Remettre le signe négatif si nécessaire
    if (original < 0) {
        reversed = -reversed;
    }

    // Afficher le résultat avec le texte demandé
    printf("Nombre inversé : %d\n", reversed);

    return 0;
}
