#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Lire la température en degrés Celsius depuis l'entrée standard
    if (scanf("%f", &celsius) != 1) {
        // En cas d'erreur de saisie, quitter avec un code d'erreur
        return 1;
    }

    // Convertir Celsius en Fahrenheit : (C * 9/5) + 32
    fahrenheit = (celsius * 9.0f / 5.0f) + 32.0f;

    // Afficher le résultat avec une décimale, respectant le format exact demandé
    printf("%.1f°C équivaut à %.1f°F\n", celsius, fahrenheit);

    return 0;
}
