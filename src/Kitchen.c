#include "Kitchen.h"
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define MAX_DISH_COUNT 6

/*UNFINISHED. FINISH SO IT WORKS*/

/**
 * This is your Chef. The heart of your business. He is defined by his Name and the maximum number of dishes he can cook.
 * To work, he needs to have free CookingSlots and know the Dish he is making.
 */
struct cook {
    int maxDishes;
    bool isCooking;
    string ChefName;
    Dish* DishesCooked[];
};

static Chef *chef = NULL;

/**
 * If the restaurant has no Chef, you can hire one. Otherwise you will have to fire him first. You can have a SINGLE one!
 * @param Name - Name of the newly hired Chef
 * @param maxDishes - How many dishes can he cook at once
 */
void hireChef(char *Name) {
    srand(time(0));
    if (chef == NULL){
        chef = (Chef*) malloc(sizeof(struct cook));
        chef->isCooking = FALSE;
        chef->maxDishes = rand() % MAX_DISH_COUNT + 1;
        chef->ChefName = Name;

        for(int i=0; i<chef->maxDishes; i++){
            chef->DishesCooked[i] = (Dish*) malloc (sizeof(Dish*));
        }
    }
}

/**
 * Calls your Chef. "You rang, Boss?" - he answers
 * @return Returns a pointer to your Chef
 */
Chef* callChef(void){
    return chef;
}

/**
 * If the cook has free slots, he can take another Dish to cook
 * @param Dish - Pointer to the Dish ordered
 */
void takeOrder(Dish* Dish){

}

/**
 * Checks if a Dish is cooked.
 * @return Returns TRUE if ready. If not decreases the cooking timer by 1 unit.
 */
int cookingTimer(void){
    int tmpTime = 0;
    Dish* tmpDish = NULL;

    for(int i = 0; i<chef->maxDishes; i++){
        if(getDishTimer(chef->DishesCooked[i])==0){
            return TRUE;
        }
        else{
            tmpDish = chef->DishesCooked[i];
            tmpTime = getDishTimer(tmpDish);
            tmpTime--;
            setCookingTime(&tmpDish, tmpTime);
        }
    }

    return FALSE;
}







