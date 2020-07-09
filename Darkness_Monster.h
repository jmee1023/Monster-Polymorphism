#ifndef PROJECT5ALTERNATE_DARKNESS_MONSTER_H
#define PROJECT5ALTERNATE_DARKNESS_MONSTER_H

#include <string>

class Darkness_Monster {
public:
    /**
     * Requires: nothing
     * Modifies: number_of_eyes 
     * Effects: sets number_of_eyes to a random int in range 2-100
     */
    Darkness_Monster();

    /**
     * Requires: nothing
     * Modifies: nothing
     * Effects: does nothing
     */
    virtual ~Darkness_Monster() = default;

    /**
     * Requires: nothing
     * Modifies: number_of_eyes 
     * Effects: calls set_number_of_eyes with noe
     */
    explicit Darkness_Monster(int noe);

    /**
     * Requires: nothing
     * Modifies: nothing
     * Effects: returns number_of_eyes
     */
    virtual int get_number_of_eyes() const;

    /**
     * Requires: nothing
     * Modifies: number_of_eyes 
     * Effects: sets number_of_eyes to noe if noe is in range 2-100.
     *          otherwise sets number_of_eyes to 100.
     */
    void set_number_of_eyes(int noe);

    /**
     * Requires: nothing
     * Modifies: number_of_eyes 
     * Effects: if number_of_eyes is at least 1, decrements number_of_eyes by one.
     *          otherwise sets number_of_eyes to a random number between 5 and MAX_NUMBER_EYES.
     */
    
    virtual bool poke_eye();

    // pure virtual method to return a scary string
    virtual std::string scare() = 0;

    static const int MAX_NUMBER_EYES = 100;
protected:
    int number_of_eyes;
};

#endif //PROJECT5ALTERNATE_DARKNESS_MONSTER_H
