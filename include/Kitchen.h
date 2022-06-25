#ifndef GROUP_TASK1_KITCHEN_H
#define GROUP_TASK1_KITCHEN_H

#include "defines.h"
#include "Dish.h"

typedef struct cook Chef;

void hireChef(char *Name);
Chef* callChef(void);
void takeOrder(Dish* Dish);
int cookingTimer(void);

#endif //GROUP_TASK1_KITCHEN_H
