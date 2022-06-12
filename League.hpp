#include <iostream>
#include <string>
#include <vector>
#include "Team.hpp"
using namespace std;
class League{
    private:
    vector<Team> teams;
    public:
    League(){}
    void createLeague(vector<Team> teams);
    void createLeague();
    void createLeagueCombined(vector<Team> teams);
    void representLeague();

    vector<Team> getTeams(){
        return this->teams;
    }

};