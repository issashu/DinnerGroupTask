#include <time.h>
#include <stdlib.h>

//Replace following with Windows.h if on Windows OS
#include <unistd.h>

#include "restaurant.h"
#include "Customer.h"
#include "defines.h"

/*UNFINISHED. FINISH SO IT WORKS. ENTRY POINT FOR THE TASK*/

short openForBusiness(void) {
    static int i = 0;
    static int score = 0;

    Customer *ClientsIncoming[MAX_CUSTOMERS];

    for (; i < MAX_ROUNDS;) {
        srand(time(0));
        int BlackFridayWave = rand() % MAX_CUSTOMERS + 1;

        for (int j = 0; j < BlackFridayWave; j++) {
            ClientsIncoming[j] = newCustomer();
            sleep(5);
        }


        for (int k = 0; k < BlackFridayWave; k++) {
            if (angryFlipLeave(ClientsIncoming[k])) {
                score -= 1;
            }

            if (getCustomerStatus(ClientsIncoming[k]) >= 2) {
                score += 1;
            }
        }

        i++;
        return TRUE;
    }

    return FALSE;
}
