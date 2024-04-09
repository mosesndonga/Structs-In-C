#include <stdio.h>
#include "function.h"

int main() {
    int arraySize = 10; 
    struct UberVehicle uberArray[arraySize];

    // Populate the structure array
    populateUberVehicles(uberArray, arraySize);

    // Print the structure elements
    printUberVehicles(uberArray, arraySize);

    return 0;
}

