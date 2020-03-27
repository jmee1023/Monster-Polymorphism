#include "Cloud_Monster.h"
#include "Comet_Monster.h"
#include <ctime>
#include <iostream>
#include <memory>
#include <vector>
using namespace std;
int get_int_input(string prompt, string invalid, int low, int high);
void Monster_mode();
void Play_mode();



int main() {

    /*
     * TODO: Use polymorphism in a program of your choice, utilizing at least ten objects of the Cloud and Comet Monster classes.
     *
     */
    int choice = get_int_input("Please Select who would would like to play as. Press 1 to play as a Monster or press 2 to play as a person","Invalid Seection, Please try again: ",1,2);

    if(choice == 1){
        cout<<"Im getting angry! You are turning into a monster!"<< endl;
        Monster_mode();
    }
    else{
        cout<<"Best of luck to you."<< endl;
        Play_mode();
    }


    return 0;
}
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
void Monster_mode(){
    Cloud_Monster Kirby(2);
    //Entry Message
    cout<<"Congratulations! Your monsters name will be Kirby. Lethal yet Playful!"<<endl;
    cout<<"Your teammates are on their way!"<< endl;
    //Vector of sky monsters called teammates
    vector<unique_ptr<Sky_Monster>> teammates;
    //Populate the vector with a mix of cloud and comet monsters
    for (int i = 0; i < 10; ++i) {
        if (rand() % 2) {
            teammates.push_back(make_unique<Cloud_Monster>());
        } else {
            teammates.push_back(make_unique<Comet_Monster>());
        }
    }

    //Prompt user for an action
    int select = get_int_input("Please select an option: 1: To grow more wings! 2: for scare the enemy  3: to exit ", "Invalid input, try again:", 1,3);
    while (select != 3){
        if (select == 1){
            for(int j = 0; j < teammates.size(); j++){
                teammates[j]->growth_spurt();
            }

        }

        if(select == 2){
            cout<<"This is how my friends scare"<< endl;
            for(int j = 0; j < teammates.size(); j++){
                cout << "The monster approaches: " << teammates[j]->scare() << endl;
            }
            cout << "This is how Kirby scares: "<< Kirby.scare()<< endl;
        }
        select = get_int_input("Please select an option: "
                               "1: to grow more wings "
                               "2: to scare the enemy"
                               "3: to exit", "Invalid input, try again:", 1,3);
    }
    cout<<"Great Fight!"<< endl;

    }



void Play_mode(){
    vector<unique_ptr<Sky_Monster>> enemies;
    srand(time(NULL));
    for (int i = 0; i < 10; ++i) {
        if (rand() % 2) {
            enemies.push_back(make_unique<Cloud_Monster>());
        } else {
            enemies.push_back(make_unique<Comet_Monster>());
        }
    }
    int index = get_int_input("Enter a number from 0 to " + to_string(enemies.size()-1) + ": ",
                              "Invalid input. Try again: ",
                              0,
                              enemies.size()-1);
    cout << "The monster approaches: " << enemies[index]->scare() << endl;
    int choice = get_int_input("Choose a number between 1 and 3: ",
                               "Invalid input. Pick a number from 1 to 3: ",
                               1,
                               3);
    if (rand() % 3 + 1 == choice) {
        cout << "You were lucky and beat the monster!" << endl;
        enemies.erase(enemies.begin() + index);
    } else {
        cout << "The monster ate you!" << endl;

    }

}

