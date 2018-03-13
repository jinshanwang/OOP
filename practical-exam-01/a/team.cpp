#include <iostream>
#include "person.h"
#include "team.h"
#include "player.h"
#include "coach.h"
using namespace std;

Team::Team()                           // creates a team object containing 5 team members as an array;
{
  n=5;
  T=new Person*[n];
  for (int  i = 0; i < n; i++) {
    if (i==0 || i==n-1) {
      T[i]=new Coach("Coach",12);
    }
    else{
      int *list;
      T[i]=new Player("player",12,list,1);
    }
  }
}                                  // the first and the last elements of the array are coaches,
                                  // the rest of the elements are players
Person** Team::get_team()            // returns the array of the four team members
{ m=4;
  t=new Person*[m];
for (int i = 0; i < m; i++) {
      t[i]=T[i];
}
return t;
}
