#include <stdio.h>
#include "route_cal.h"


double plane_cal(int departure, int arrival) {

    double plane_time = 0;

    // (0)Frankfurt, (1)Stuttgart, (2)Munich
    if (departure == 1 && arrival == 11 ||
        departure == 11 && arrival == 1) {
        int frank_munc = 300;
        plane_time = 1.5 + (0.002103055473 * frank_munc);
        return plane_time;

    } else if (departure == 1 && arrival == 6 ||
               departure == 6 && arrival == 1) {
        int frank_stutt = 157;
        plane_time = 1.5 + (0.002103055473 * frank_stutt);
        return plane_time;

    } else if (departure == 11 && arrival == 6 ||
               departure == 6 && arrival == 11) {
        int munich_stutt = 193;
        plane_time = 1.5 + (0.002103055473 * munich_stutt);
        return plane_time;
    }
    return plane_time;




}


/*
printf("Choose 2 airports (first start airport, then end airport)\n");
printf("Here is the list of airports:\n(f)Frankfurt, (s)Stuttgart, (m)Munich\n");
scanf(" %c %c", &start_airport, &end_airport);
 */




void travel_comparison(double plane, int train) {


    if (plane < train) {
        printf("\n\nThe plane is the fastest means of travel at %lf h", plane);
    } else {
        printf("\n\nThe train is the fastest means of travel at %d h", train);
    }

}
