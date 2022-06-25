#include "Customer.h"
#include "defines.h"
#include <stdlib.h>
#include <time.h>


/*UNFINISHED. FINISH SO IT WORKS*/

struct customer {
    int nr_orders;
    int menuIDs;
};

Customer* newCustomer(void) {
    Customer *tmpCustomer = (Customer*) malloc (sizeof(struct customer));
    srand(time(0));
    tmpCustomer->nr_orders = (rand() % MAX_ORDERS) + 1;
    tmpCustomer->menuIDs = (rand() % MAX_ORDER_ID) + 1;

    return tmpCustomer;
}

