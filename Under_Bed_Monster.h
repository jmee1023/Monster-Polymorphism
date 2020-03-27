#ifndef PROJECT5ALTERNATE_UNDER_BED_MONSTER_H
#define PROJECT5ALTERNATE_UNDER_BED_MONSTER_H

#include "Darkness_Monster.h"

class Under_Bed_Monster : public Darkness_Monster {
public:
    /**
     * Requires: nothing
     * Modifies: number_of_eyes 
     * Effects: calls parent default constructor
     */
    Under_Bed_Monster();

    /**
     * Requires: nothing
     * Modifies: number_of_eyes 
     * Effects: calls parent non-default constructor
     */
    explicit Under_Bed_Monster(int noe);

    /**
     * Requires: nothing
     * Modifies: nothing
     * Effects: randomly returns either "grabs you" or "[number_of_eyes] eyes watching you".
     */
    // TODO: Implement this method in Under_Bed_Monster.cpp
    std::string scare() override;
};

#endif //PROJECT5ALTERNATE_UNDER_BED_MONSTER_H
