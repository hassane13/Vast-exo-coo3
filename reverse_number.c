#include <stdio.h>

int main() {
    int n, reversed = 0;

    // Demander à l'utilisateur d'entrer un entier
    printf("Entrez un entier : ");

    // Lire l'entier depuis l'entrée standard et vérifier la réussite de la lecture
    if (scanf("%d", &n) != 1) {
        printf("Erreur de lecture.\n");
        return 1; // Fin du programme en cas d'erreur de saisie
    }

    int original = n; // Sauvegarder la valeur originale pour gérer le signe plus tard

    // Si le nombre est négatif, on travaille avec sa valeur absolue
    if (n < 0) {
        n = -n;
    }

    // Boucle pour inverser les chiffres du nombre
    while (n != 0) {
        // Extraire le dernier chiffre de n (n % 10)
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

    // Afficher le nombre inversé
    printf("Nombre inversé : %d\n", reversed);

    return 0;
}
