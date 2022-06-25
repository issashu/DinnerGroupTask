#include "defines.h"
#include "restaurant.h"

int main() {
    short business = TRUE;

    while (business){
        business = openForBusiness();
    }

    return EXIT_OK;
}
