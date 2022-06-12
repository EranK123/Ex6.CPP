#pragma once

#include <iostream>
#include <string>
using namespace std;
class Team{
    private:
    string name;
    double skillLevel;
    int wins;
    int loses;
    int winLossBalance;
    int hoopsBalance;
    int totalScore;
    public:
    Team();
    Team(string name, double skillLevel);
    void setName(string name){
        this->name = name;
    }

    string getName(){
        return this->name;
    }

    int getTotalScore(){
        return this->totalScore;
    }
};