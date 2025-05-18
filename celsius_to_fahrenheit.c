#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Lire la température en degrés Celsius depuis l'entrée standard
    scanf("%f", &celsius);

    // Convertir Celsius en Fahrenheit avec la formule : (C * 9/5) + 32
    fahrenheit = (celsius * 9 / 5) + 32;

    // Afficher la température convertie avec une décimale
    printf("%.1f°C équivaut à %.1f°F\n", celsius, fahrenheit);

    return 0;
}
