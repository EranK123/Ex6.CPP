#include <iostream>
#include <string>
#include <vector>
#include "Game.hpp"
using namespace std;
class GameWeek{
    private:
    vector<Game> week;
    public:
    GameWeek();
    void setWeek(vector<Game> week);
};