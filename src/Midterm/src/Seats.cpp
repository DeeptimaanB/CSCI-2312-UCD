#include <iostream>
#include "Seats.h"

int totalSeats(int r, int s, int i){

    //base case
    if (r == 0){
        return i;
    }

    return s+(totalSeats(r-1, s+s, i));

}