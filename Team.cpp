#include <iostream>
#include <string>
#include "Team.hpp"
using namespace std;

Team::Team(string name, double skillLevel){
    this->name = name;
    this->skillLevel = skillLevel;
    this->wins = 0;
    this->loses = 0;
    this->winLossBalance = 0;
    this->hoopsBalance = 0;
    this->totalScore = 0;
}
