#include <stdio.h>
#include "function.h"

// Function to populate the structure array
void populateUberVehicles(struct UberVehicle *uberArray, int arraySize) {
    for (int i = 0; i < arraySize; i++) {
        printf("Enter details for Uber Vehicle %d:\n", i + 1);
        printf("Registration No.: ");
        scanf("%s", uberArray[i].regNo); // Assuming regNo does not contain spaces
        printf("Chassis No.: ");
        scanf("%s", uberArray[i].chassisNo); // Assuming chassisNo does not contain spaces
        printf("Driver: ");
        scanf("%s", uberArray[i].driver); // Assuming driver does not contain spaces
        printf("Route: ");
        scanf("%s", uberArray[i].route); // Assuming route does not contain spaces
    }
}

// Function to print the structure elements
void printUberVehicles(struct UberVehicle *uberArray, int arraySize) {
    printf("\nUber Vehicle Details:\n");
    for (int i = 0; i < arraySize; i++) {
        printf("Uber Vehicle %d:\n", i + 1);
        printf("Registration No.: %s\n", uberArray[i].regNo);
        printf("Chassis No.: %s\n", uberArray[i].chassisNo);
        printf("Driver: %s\n", uberArray[i].driver);
        printf("Route: %s\n", uberArray[i].route);
    }
}
