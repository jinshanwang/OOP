#ifndef TEAM_H
#define TEAM_H
#include <iostream>
#include "person.h"
#include "player.h"
#include "coach.h"
using namespace std;

class Team {
private:
  Person **T;
  int n;
  Person **t;
  int m;
public:
  Team();                           // creates a team object containing 5 team members as an array;
                                    // the first and the last elements of the array are coaches,
                                    // the rest of the elements are players
  Person **get_team();              // returns the array of the four team members
};
#endif
