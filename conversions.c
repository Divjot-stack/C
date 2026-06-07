#include <stdio.h>

int main() {
    float km, meters, feet, inches, centimeters;

    printf("Enter distance in kilometers: ");
    scanf("%f", &km);

    meters = km * 1000;
    feet = km * 3280.84;
    inches = km * 39370.1;
    centimeters = km * 100000;

    printf("\nDistance in meters: %.2f", meters);
    printf("\nDistance in feet: %.2f", feet);
    printf("\nDistance in inches: %.2f", inches);
    printf("\nDistance in centimeters: %.2f", centimeters);

    return 0;
}