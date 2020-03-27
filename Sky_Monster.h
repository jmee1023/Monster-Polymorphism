//
// Created by Jimmy Mee on 3/27/20.
//

#ifndef PROJECT5ALTERNATE_SKY_MONSTER_H
#define PROJECT5ALTERNATE_SKY_MONSTER_H
#include <string>
class Sky_Monster{
public:
    /**
     * Requires: nothing
     * Modifies: number_of_wings
     * Effects: sets number of wings randomly bewteen 2 AND 100
     */
    Sky_Monster();

    /**
     * Requires: number of wings
     * Modifies: number_of_wings 
     * Effects: sets number of wings to the parameter
     */
    Sky_Monster(int now);

    /**
   * Requires: nothing
   * Modifies: noting
   * Effects: returns number of wings
   */
    virtual int get_number_of_wings() const;

    /**
  * Requires: int number of wings
  * Modifies: number of wings
  * Effects: sets number of wings
  */
    void set_number_of_wings(int noe);
    /**
 * Requires: nothing
 * Modifies: number of wings
 * Effects: adds two more wings. Unless it exceeds max number
 */
    void growth_spurt();

    virtual std::string scare() = 0;


    static const int MAX_NUMBER_WINGS = 100;

protected: int number_of_wings;
};

#endif //PROJECT5ALTERNATE_SKY_MONSTER_H
