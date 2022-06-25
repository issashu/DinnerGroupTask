#include "restaurant.h"
#include "defines.h"

/*UNFINISHED. FINISH SO IT WORKS*/

short openForBusiness(void){
    static int i=0;
    for(;i<MAX_ROUNDS;){
        i++;
        return TRUE;
    }
    return FALSE;
}
