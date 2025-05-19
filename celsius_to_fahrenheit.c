#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Lire la température en degrés Celsius depuis l'entrée standard
    // Vérifier que la saisie est correcte (un nombre flottant)
    if (scanf("%f", &celsius) != 1) {
        // En cas d'erreur de saisie, terminer le programme avec un code d'erreur
        return 1;
    }

    // Convertir Celsius en Fahrenheit avec la formule : (C * 9/5) + 32
    // Utilisation de 9.0 et 5.0 pour forcer la division flottante
    fahrenheit = (celsius * 9.0f / 5.0f) + 32.0f;

    // Afficher la température convertie avec une décimale
    // Format strictement conforme à l'exemple demandé
    printf("%.1f°C équivaut à %.1f°F\n", celsius, fahrenheit);

    return 0;
}
