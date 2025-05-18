#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("%.1f degres Celsius = %.1f degres Fahrenheit\n", celsius, fahrenheit);

    return 0;
}
