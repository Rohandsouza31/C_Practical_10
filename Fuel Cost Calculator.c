#include <stdio.h>

int main() {
    // Variable declarations
    float distance, mileage, petrol_price;
    float fuel_required, fuel_cost;

    // Input section
    printf("Enter Total Distance to Travel (in km): ");
    scanf("%f", &distance);

    printf("Enter Vehicle Mileage (in km/l): ");
    scanf("%f", &mileage);

    printf("Enter Current Petrol Price (per litre): ");
    scanf("%f", &petrol_price);

    // Calculation section
    fuel_required = distance / mileage;
    fuel_cost = fuel_required * petrol_price;

    // Output section (Trip Summary)
    printf("\n--- Trip Summary ---\n");
    printf("Distance            : %.0f km\n", distance);
    printf("Fuel Required       : %.2f litres\n", fuel_required);
    printf("Estimated Fuel Cost : ₹%.2f\n", fuel_cost);

    return 0;
}