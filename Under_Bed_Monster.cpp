#include "Under_Bed_Monster.h"
using namespace std;

Under_Bed_Monster::Under_Bed_Monster() : Darkness_Monster() {
}

Under_Bed_Monster::Under_Bed_Monster(int noe) : Darkness_Monster(noe) {
}

/**
     * Requires: nothing
     * Modifies: nothing
     * Effects: randomly returns either "grabs you" or "[number_of_eyes] eyes watching you".
     */
// TODO: Implement this method in Under_Bed_Monster.cpp
string Under_Bed_Monster::scare() {
    string s1 = "Grabs you";
    string s2 = number_of_eyes + " eyes watching you";
    int num = rand() % 2 + 1;
    if(num == 1){
        return s1;
    } else
        return s2;



}