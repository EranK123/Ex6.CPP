#include <iostream>
#include <string>
#include "Team.hpp"
using namespace std;

Team::Team(){}

Team::Team(string name){
    this->name = name;
    this->skillLevel = 0;
    this->wins = 0;
    this->loses = 0;
    this->winLossBalance = 0;
    this->hoopsBalance = 0;
    this->totalScore = 0;
}
