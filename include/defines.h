#ifndef GROUP_TASK1_DEFINES_H
#define GROUP_TASK1_DEFINES_H

#define string char*

#define EXIT_OK 0
#define EXIT_NOK 1
#define TRUE 1
#define FALSE 0

#define MAX_ROUNDS 10
#define MAX_ORDERS 2
#define MAX_ORDER_ID 12

typedef enum CustomerStatus{
    NO_STATUS = 0,
    WAITING_IN_QUEUE,
    SEATED,
    ORDERED,
    WELL_FED,
    LEAVING
}CustomerStatus;

#endif //GROUP_TASK1_DEFINES_H
