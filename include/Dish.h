#ifndef GROUP_TASK1_DISH_H
#define GROUP_TASK1_DISH_H

#include "defines.h"

typedef struct dish Dish;

Dish* newDish(void);
void setDishName(Dish **Dish, string Name);
void setDishPrice(Dish **Dish, float Price);
void setNumIngredients(Dish **Dish, int Ingredients);
void setNeededIngredients(Dish **Dish, string Ingredients[]);
void setCookingTime(Dish **Dish, int Time);
void addToMenu(Dish **Dish, int menuID);

void printIngredients(Dish* Dish);

int getDishTimer(Dish *Dish);
string getDishName(Dish *Dish);
int getNumberIngredients(Dish *Dish);
float getDishPrice(Dish *Dish);
int getMenuID(Dish *Dish);
string* getIngredientsList(Dish *Dish);

#endif //GROUP_TASK1_DISH_H
