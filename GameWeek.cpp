#include <iostream>
#include <string>
#include <vector>
#include "Game.hpp"
#include "GameWeek.hpp"
using namespace std;

GameWeek::GameWeek(){

}

void GameWeek::setWeek(vector<Game> week){
    for(int i = 0; i < week.size(); i++){
        this->week.at(i) = week.at(i);
    }
}