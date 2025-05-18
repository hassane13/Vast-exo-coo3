#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    // Remplacer %.1f°C équivaut à %.1f°F
    printf("%.1fC equivaut a %.1fF\n", celsius, fahrenheit);

    return 0;
}
