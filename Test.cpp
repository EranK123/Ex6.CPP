#include <iostream>
#include "Game.hpp"
#include "League.hpp"
#include "Schedule.hpp"
#include "Team.hpp"
#include "doctest.h"
using namespace std;


TEST_CASE("CHECK VALID"){
    Team team1 = Team();
    Team team2 = Team();
    Game game = Game(team1, team2);
    team1.setName("Golden State");
    team2.setName("Boston");
    CHECK(team1.getName() == "Golden State");
    CHECK(team2.getName() == "Boston");
    CHECK(team1.getTotalScore() == 0);
    CHECK(team2.getTotalScore() == 0);
    CHECK(game.winner() == team1.getName());
    CHECK(game.getHomeScore() == 0);
    CHECK(game.getAwayScore() == 0);
    CHECK(team2.getTotalScore() == 0);
    CHECK(team2.getTotalScore() == 0);
}
TEST_CASE("bad input"){
    Team team1 = Team();
    Team team2 = Team();
    Game game = Game(team1, team2);
    team1.setName("Golden State");
    team2.setName("Boston");
    CHECK_THROWS(team1.setName("/r"));
    CHECK_THROWS(team1.setName("/t"));
    CHECK_THROWS(team1.setName("/n"));
    CHECK_THROWS(team1.setName(""));
    CHECK_THROWS(team1.setName(" "));
    CHECK_THROWS(team2.setName("/r"));
    CHECK_THROWS(team2.setName("/n"));
    CHECK_THROWS(team2.setName("/t"));
    CHECK_THROWS(team2.setName(""));
    CHECK_THROWS(team2.setName(" "));
    Team other = Team("HELLO");
    vector<Team> vec;
    vec.clear();
    vec.push_back(team1);
    vec.push_back(team2);
    vec.push_back(other);
    League leauge;
    leauge.createLeague(vec);
    CHECK_NE(leauge.getTeams().size(), 1);

}