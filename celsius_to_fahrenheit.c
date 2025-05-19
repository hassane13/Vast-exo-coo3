#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Lire la température en degrés Celsius depuis l'entrée standard
    // Vérification que la saisie est bien un nombre flottant
    if (scanf("%f", &celsius) != 1) {
        // En cas d'erreur de saisie, quitter avec un code d'erreur
        return 1;
    }

    // Calculer la température en Fahrenheit selon la formule :
    // Fahrenheit = (Celsius * 9/5) + 32
    // Utilisation de 9.0f et 5.0f pour forcer la division flottante
    fahrenheit = (celsius * 9.0f / 5.0f) + 32.0f;

    // Afficher le résultat avec une décimale, format strictement conforme
    // Utilisation de \xB0 pour le caractère degré afin d'éviter les problèmes d'encodage
    printf("%.1f\xB0C équivaut à %.1f\xB0F\n", celsius, fahrenheit);

    return 0;
}
