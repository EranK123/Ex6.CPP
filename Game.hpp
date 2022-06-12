#pragma once
#include <iostream>
#include <string>
#include "Team.hpp"
using namespace std;
class Game{
    private:
    Team home;
    Team away;
    int homeScore;
    int awayScore;
    public:
    Game(Team home, Team away);
    Team winner();
    int getHomeScore(){
        return this->homeScore;
    }

    int getAwayScore(){
        return this->awayScore;
    }
};