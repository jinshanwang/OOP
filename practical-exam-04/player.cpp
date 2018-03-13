#include <string>
#include "player.h"
#include "person.h"
using namespace std;

int Player::nextID=1000;
Player::Player(string n, int sl, int *list, int m):Person(n,"player",sl)// creates a person with name n, whose occupation is
{
  personID=nextID;
  nextID++;
  name = n;
  occupation="player";
  serviceLength=sl;
  L=list;
  lengthList=m;
  for (int i = 0; i < lengthList; i++) {
    int min=i;
    for (int  j = i+1; j < lengthList; j++) {
      if (*(L+j) < *(L+i)) {
        min=j;
      }
      if (min != i) {
        /*int temp;
        temp=*(L+i);
        *(L+i)=*(L+min);
        *(L+min)=temp;*/
        swap(L[i],L[min]);
      }
    }
  }


}                                           // “player” and service length is l;
                                           // list records the time that a player spent in the
                                           // field in each game, the integers are distinct and
                                           // sorted in ascending order; m is the number of games
                                           // searches for a particular time x in the array of times;
                                           // returns either the index of x in the array if x exi
                                           // you may use your favourite sorting asts or -1 otherwise;
int Player::searchGame(int x){
  int game=0;
  for (int i = 0; i < lengthList; i++) {
    if (*(L+i)==x) {
      game=i;

    }
    else if(*(L+i)!=x){
      continue;

    }
  }
  if (game!=0)
  {
    game=-1;
  }
    
  return game;
}
int Player::get_salary(){
  return salary;
}
