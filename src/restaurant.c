#include "restaurant.h"
#include "Customer.h"
#include "defines.h"

/*UNFINISHED. FINISH SO IT WORKS*/

short openForBusiness(void) {
    static int i = 0;
    Customer *ClientsIncoming[MAX_CUSTOMERS];

    for (; i < MAX_ROUNDS;) {
        for (int j = 0; j < MAX_CUSTOMERS; j++) {
            ClientsIncoming[j] = newCustomer();
        }
        i++;
        return TRUE;
    }
    return FALSE;
}
