#include "restaurant.h"
#include "defines.h"
#include <stdio.h>

#include "Dish.h"
#include "Kitchen.h"

short openForBusiness(void){
    Dish *ShopskaSalata;
    Chef *GlavenGotvach;
    ShopskaSalata = newDish();
    setDishName(&ShopskaSalata, "Shopska Salata");
    setDishPrice(&ShopskaSalata, 2.30);
    setNumIngredients(&ShopskaSalata, 6);
    string Sastavki[] ={"domati", "krastavitzi", "maslini", "chushki", "luk", "sirene"};
    setNeededIngredients(&ShopskaSalata, Sastavki);
    setCookingTime(&ShopskaSalata, 5);
    addToMenu(&ShopskaSalata, 1);
    printIngredients(ShopskaSalata);
    printf("%s\n", getDishName(ShopskaSalata));
    printf("%.2F\n", getDishPrice(ShopskaSalata));

    hireChef("Pesho", 2);
    GlavenGotvach = callChef();

    return FALSE;
}
