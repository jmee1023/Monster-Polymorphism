//
// Created by Jimmy Mee on 3/27/20.
//
#include "Sky_Monster.h"

Sky_Monster::Sky_Monster() {
    number_of_wings = rand() % (MAX_NUMBER_WINGS-1) + 2;
    if(number_of_wings % 2 != 0){
        number_of_wings ++;
    }
}

Sky_Monster::Sky_Monster(int now) {
    set_number_of_wings(now);
}

int Sky_Monster::get_number_of_wings() const {
    return number_of_wings;
}

void Sky_Monster::set_number_of_wings(int now) {
    if (now < 2 || now > MAX_NUMBER_WINGS) {
        now = MAX_NUMBER_WINGS;
    }
    if(now % 2 != 0){
        number_of_wings = MAX_NUMBER_WINGS;
    }
    else
        number_of_wings = now;
}

void Sky_Monster::growth_spurt() {
    if(number_of_wings <= MAX_NUMBER_WINGS - 2){
        number_of_wings += 2;
    }
    else{
        number_of_wings = MAX_NUMBER_WINGS;
    }

}


