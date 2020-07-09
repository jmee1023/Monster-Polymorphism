#include "Closet_Monster.h"
#include "Under_Bed_Monster.h"
#include <ctime>
#include <iostream>
#include <memory>
#include <vector>
using namespace std;
int get_int_input(string prompt, string invalid, int low, int high) {
    cout << prompt;
    int choice = 0;
    string junk;
    while (!(cin >> choice) || choice < low || choice > high) {
        cout << invalid;
        cin.clear();
        getline(cin, junk);
    }
    return choice;
}

int main() {

    /*
      Create a vector of Darkness Monster unique pointers and push a variety of ten Closet Monsters and Under Bed Monsters to it.
      Tell the user that there are monsters everywhere!
     *  Loop through the vector and call the scare method on each. Print the return values.
     *     - This is polymorphism. Why? Answer in your README file.
         Repeatedly give the user options to poke the eyes or run away.
     *     - If they poke the eyes, loop through the vector and call the poke_eye method on each.
     *    
     *     - If they choose to run away, the program ends.
     */
    vector<unique_ptr<Darkness_Monster>> darkMonsters;
    for (int i = 0; i < 10; ++i) {
        if (rand() % 2) {
            darkMonsters.push_back(make_unique<Closet_Monster>());
        } else {
            darkMonsters.push_back(make_unique<Under_Bed_Monster>());
        }
    }
    cout<< "There are monsters everywhere!!"<< endl;
    for(int j = 0; j < darkMonsters.size(); j++){
        cout << darkMonsters[j]->scare() << endl;
    }

    int choice = get_int_input("Press 1 to poke eye out Or press 2 to run away!", "Invalid entry, Try again: ,", 1, 2);
    while (choice != 2){
        for(int j = 0; j < darkMonsters.size(); j++){
            cout << darkMonsters[j]->poke_eye() << endl;
        }
        for(int j = 0; j < darkMonsters.size(); j++){
            cout << darkMonsters[j]->scare() << endl;
        }
        choice = get_int_input("Press 1 to poke eye out Or press 2 to run away!", "Invalid entry, Try again: ,", 1, 2);
    }

    cout<<"You got away!"<< endl;


    return 0;
}

