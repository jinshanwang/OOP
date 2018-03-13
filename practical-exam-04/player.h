#ifndef player_H
#define player_H
#include <string>
#include "person.h"
using namespace std;


class Player : public Person{
private:
   static int nextID ;
   int *L;
   int lengthList;

public:
   Player(string n, int sl, int *list, int m);// creates a person with name n, whose occupation is
                                              // “player” and service length is l;
                                              // list records the time that a player spent in the
                                              // field in each game, the integers are distinct and
                                              // sorted in ascending order; m is the number of games
                                              // searches for a particular time x in the array of times;
                                              // returns either the index of x in the array if x exi
                                              // you may use your favourite sorting asts or -1 otherwise;
   int searchGame(int x);
   int get_salary();


};
#endif
