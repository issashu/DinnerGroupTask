#ifndef GROUP_TASK1_DISH_H
#define GROUP_TASK1_DISH_H

#include "defines.h"

typedef struct dish Dish;

Dish *newDish(void);

void setDishName(Dish **Dish, string Name);

void setDishPrice(Dish **Dish, float Price);

void setNumIngredients(Dish **Dish, int Ingredients);

void setNeededIngredients(Dish **Dish, string Ingredients[]);

void setCookingTime(Dish **Dish, int Time);

void addToMenu(Dish **Dish, int menuID);

void printIngredients(Dish *Dish);

int getDishTimer(const Dish *Dish);

string getDishName(const Dish *Dish);

int getNumberIngredients(const Dish *Dish);

float getDishPrice(const Dish *Dish);

int getMenuID(const Dish *Dish);

string*getIngredientsList(const Dish *Dish);

#endif //GROUP_TASK1_DISH_H
