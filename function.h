#ifndef FUNCTION_H
#define FUNCTION_H

struct UberVehicle {
    char regNo[20];
    char chassisNo[20];
    char driver[100];
    char route[100];
};

void populateUberVehicles(struct UberVehicle *uberArray, int arraySize);
void printUberVehicles(struct UberVehicle *uberArray, int arraySize);

#endif

