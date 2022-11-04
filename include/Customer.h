#ifndef GROUP_TASK_RESTAURANT_CUSTOMER_H
#define GROUP_TASK_RESTAURANT_CUSTOMER_H

typedef struct customer Customer;

Customer *newCustomer(void);

short angryFlipLeave(Customer *client);

int getCustomerStatus(Customer *client);

#endif //GROUP_TASK_RESTAURANT_CUSTOMER_H
