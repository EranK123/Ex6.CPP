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
    int random = 50 + (rand() % 51);
    int n = rand() % 2;
    if(n == 1){
        this->homeScore += random;
        return this->home;
    }else{
        this->awayScore += random;
        return this->away;
    }
}


// Team Game::winner(){
//     if(this->homeScore > this->awayScore){
//         return this->home;
//     }else if(this->homeScore < this->awayScore){
//         return this->away;
//     }else{
//         return this->away;
//     }
// }

