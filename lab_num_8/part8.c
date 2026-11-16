#include <stdio.h>
#include <string.h>

#define TOLL_RATE 50   /* or: const int TOLL_RATE = 50; */

void processVehicle(char vehicleType[]) {
    static int totalVehicles = 0;   /* initialised once, survive between calls */
    static int totalToll     = 0;

    if (strcmp(vehicleType, "REPORT") == 0) {      /* special call: print the report */
        printf("\n===== TOLL PLAZA COLLECTION REPORT =====\n");
        printf("Toll rate per vehicle : %d PKR\n", TOLL_RATE);
        printf("Total vehicles passed : %d\n", totalVehicles);
        printf("Total revenue         : %d PKR\n", totalToll);
        printf("========================================\n");
        return;
    }

    totalVehicles++;
    totalToll += TOLL_RATE;
    printf("%-8s paid %d PKR | vehicles so far: %d | collected so far: %d PKR\n",
           vehicleType, TOLL_RATE, totalVehicles, totalToll);
}

int main(void) {
    processVehicle("Car");
    processVehicle("Bus");
    processVehicle("Truck");
    processVehicle("Car");
    processVehicle("Bike");
    processVehicle("REPORT");
    return 0;
}