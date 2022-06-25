#include "Customer.h"
#include <stdlib.h>
#include <time.h>

#define MAX_ORDERS 2
#define MAX_ORDER_ID 10

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

