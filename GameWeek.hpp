#include <iostream>
#include <string>
#include <vector>
#include "Game.hpp"
using namespace std;
class GameWeek{
    private:
    vector<Game> week;
    int weekNum;
    public:
    GameWeek(vector<Game> week, int weekNum);
};