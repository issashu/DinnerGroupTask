#include "restaurant.h"
#include "Customer.h"
#include "defines.h"
#include <stdio.h>

/*UNFINISHED. FINISH SO IT WORKS*/

short openForBusiness(void) {
    static int i = 0;
    Customer *Klient[MAX_CUSTOMERS];

    for (; i < MAX_ROUNDS;) {
        for (int j = 0; j < MAX_CUSTOMERS; j++) {
            Klient[j] = newCustomer();
        }
        i++;
        return TRUE;
    }
    return FALSE;
}
