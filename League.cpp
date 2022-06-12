#include <iostream>
#include <string>
#include <vector>
#include <iostream>
#include <cstring>
#include <cstdlib>
#include "League.hpp"
#include "Team.cpp"
using namespace std;

void League::createLeague(vector<Team> teams){
    this->teams = teams;
}


void League::createLeague(){
    string name;
    srand(time(0));
    for(int i = 0; i < 20; i++){
        name = "Team: " +  to_string((rand() % 1000)); 
        this->teams.push_back(Team(name));
    }
}

void League::representLeague(){
    for(int i = 0; i < this->teams.size(); i++){
        cout << "Name: " << this->teams.at(i).getName() << " Score: " << this->teams.at(i).getTotalScore() << endl;
    }
}

int main(){
    // League l;
    // l.createLeague();
    // l.representLeague();
    for(int i = 0; i < 5; i++){
    int random = 50 + (rand() % 51);
    cout << random << endl;
    }
}