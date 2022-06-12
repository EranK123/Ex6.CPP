#include <iostream>
#include <string>
#include "Game.hpp"
using namespace std;

Game::Game(Team home, Team away){
    this->home = home;
    this->away = away;
    this->homeScore = 0;
    this->awayScore = 0;
}

Team Game::winner(){
    if(this->homeScore > this->awayScore){
        return this->home;
    }else if(this->homeScore < this->awayScore){
        return this->away;
    }else{
        return this->away;
    }
}