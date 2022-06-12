#include <iostream>
#include <string>
#include <vector>
#include "Game.hpp"
#include "GameWeek.hpp"
#include "Schedule.hpp"
using namespace std;

void Schedule::addWeek(GameWeek week){
    this->schedule.push_back(week);
}