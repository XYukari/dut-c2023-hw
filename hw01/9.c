#include <stdio.h>

int main() {
    double Fahrenheit, Celsius, Kelvin;
    while (scanf("%lf", &Fahrenheit) == 1) {
        Celsius = 5.0 / 9.0 * (Fahrenheit - 32.0);
        Kelvin = Celsius + 273.16;
        printf("Fahrenheit temperature: %.2lf\n", Fahrenheit);
        printf("Celsius temperature: %.2lf\n", Celsius);
        printf("Kelvin temperature: %.2lf\n", Kelvin);
    }
    return 0;
}